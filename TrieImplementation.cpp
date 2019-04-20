#include<iostream>
#include<string.h>
using namespace std;

struct trie_node {
	struct trie_node* child[26];
	bool terminate_string;
};

struct trie_node* get_trie_node() {
	struct trie_node* new_node = (struct trie_node*) malloc(
			sizeof(struct trie_node));
	for (int i = 0; i < 26; i++) {
		new_node->child[i] = NULL;
	}
	new_node->terminate_string = false;
	return new_node;
}

bool search(struct trie_node* root, char *p) {
	struct trie_node* temp = root;
	int len = strlen(p);
	for (int i = 0; i < len; i++) {
		if (temp->child[p[i] - 'a'] == NULL) {
			return false;
		}
		temp = temp->child[p[i] - 'a'];
	}
	if(temp->terminate_string)
		return true;
	else
		return false;
}

void insert_trie_node(struct trie_node* root, char *p) {
	int len = strlen(p);
	//cout<<len;
	struct trie_node* temp = root;
	for (int i = 0; i < len; i++) {
		if (temp->child[p[i] - 'a'] == NULL) {
			temp->child[p[i] - 'a'] = get_trie_node();
		}
		temp = temp->child[p[i] - 'a'];
	}
	temp->terminate_string = true;

}
int main() {
	struct trie_node* root = get_trie_node();
	insert_trie_node(root, (char*) "ganesh");
	insert_trie_node(root, (char*) "mahesh");
	insert_trie_node(root, (char*) "suresh");
	insert_trie_node(root, (char*) "gaurav");
	search(root, (char*) "gaurav") ?
			cout << "\nPresent " : cout << "\nNot Present";
}
