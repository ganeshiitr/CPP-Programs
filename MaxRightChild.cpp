//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Maximum among all right child nodes

int max_node = 0;

struct tree_node {
	int data;
	tree_node* left;
	tree_node* right;
};

tree_node* create_node(int data) {
	struct tree_node* new_node = (tree_node *) malloc(sizeof(tree_node));
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void traverse_tree(struct tree_node* root) {
	if (root != NULL) {
		cout << root->data << " ";
		traverse_tree(root->left);
		traverse_tree(root->right);
	}
	return;
}

void maximum_right_node(struct tree_node* root) {
	if (root != NULL) {
		maximum_right_node(root->left);
		maximum_right_node(root->right);
		if (root->right != NULL && root->right->data > max_node) {
			max_node = root->right->data;
		}
		return;
	}
	return;
}

int main() {
	struct tree_node* root = create_node(1);
	root->left = create_node(2);
	root->right = create_node(3);
	root->left->left = create_node(4);
	root->left->right = create_node(5);
	root->right->left = create_node(6);
	root->right->right = create_node(7);
	traverse_tree(root);
	maximum_right_node(root);
	cout << "\nmax right node: " << max_node;
}
