//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 * Check if two trees are Mirror
 * Given two Binary Trees, write a function that returns true
 * if two trees are mirror of each other, else false
 */

struct node {
	struct node* left;
	int data;
	struct node* right;
};

node* create_node(int data) {
	struct node* new_node = (node*) malloc(sizeof(node));
	new_node->left = NULL;
	new_node->data = data;
	new_node->right = NULL;
	return new_node;
}

void print_tree(struct node* root) {
	if (root != NULL) {
		cout << " " << root->data;
		print_tree(root->left);
		print_tree(root->right);
	} else {
		return;
	}
}
bool is_identical_tree(struct node* t1, struct node* t2) {
	if (t1 == NULL && t2 == NULL) {
		return true;
	} else if (t1 == NULL && t2 != NULL) {
		return false;
	} else if (t1 != NULL && t2 == NULL) {
		return false;
	} else if (t1->data != t2->data) {
		return false;
	} else {
		bool a = is_identical_tree(t1->left, t2->left);
		bool b = is_identical_tree(t1->right, t2->right);
		if (a && b)
			return true;
		else
			return false;
	}
}

struct node* create_mirror_tree(struct node* root) {
	if (root == NULL) {
		return NULL;
	} else {
		create_mirror_tree(root->left);
		create_mirror_tree(root->right);

		struct node* temp = NULL;
		temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
	return root;
}

int main() {
	struct node *t1 = create_node(1);
	t1->left = create_node(2);
	t1->right = create_node(3);
	t1->left->left = create_node(4);
	t1->left->right = create_node(5);
	cout << "Tree 1 --> ";
	print_tree(t1);
	cout << endl;

	struct node *t2 = create_node(1);
	t2->left = create_node(3);
	t2->right = create_node(2);
	t2->right->left = create_node(6);
	t2->right->right = create_node(4);
	cout << "Tree 2 --> ";
	print_tree(t2);
	cout << endl;

	t1 = create_mirror_tree(t1);
	print_tree(t1);

	bool same_or_not = is_identical_tree(t1, t2);
	if(same_or_not) {
		cout<<"\nboth tree are mirror ";
	}else {
		cout<<"\nboth tree not mirror";
	}

}
