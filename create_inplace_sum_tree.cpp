#include<iostream>
using namespace std;

struct node {
	struct node* left;
	int data;
	struct node* right;
};

struct node* create_node(int data) {
	struct node* new_node = (node*) malloc(sizeof(node));
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void traverse_tree(struct node* root) {
	if (root == NULL)
		return;
	else {
		cout << root->data << " ";
		traverse_tree(root->left);
		traverse_tree(root->right);
	}
}

int sum_tree(struct node* root) {
	if (root == NULL) {
		return 0;
	} else {
		int left = sum_tree(root->left);
		int right = sum_tree(root->right);
		root->data += (left + right);
		return root->data;
	}
}

int main() {
	struct node* root = create_node(100);
	root->left = create_node(12);
	root->right = create_node(30);
	traverse_tree(root);
	sum_tree(root);
	traverse_tree(root);

}
