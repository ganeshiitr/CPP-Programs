//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<int, queue<int>> my_map_lefttoright;
map<int, stack<int>> my_map_righttoleft;

struct node {
	struct node* left;
	int data;
	struct node* right;
};

struct node* create_node(int data) {
	struct node* new_node = (node *) malloc(sizeof(node));
	new_node->left = NULL;
	new_node->data = data;
	new_node->right = NULL;
	return new_node;
}

void tree_traversal(struct node* root) {
	if (root == NULL)
		return;
	else {
		cout << " " << root->data;
		tree_traversal(root->left);
		tree_traversal(root->right);
	}

}

void create_boustrophedon_order(struct node* root, int level) {

	if (root == NULL) {
		return;
	} else {
		if (level % 2 == 0) {
			my_map_lefttoright[level].push(root->data);
		} else {
			my_map_righttoleft[level].push(root->data);
		}
		create_boustrophedon_order(root->left, level + 1);
		create_boustrophedon_order(root->right, level + 1);
		return;
	}
}

int main() {
	struct node* root = create_node(1);
	root->left = create_node(2);
	root->right = create_node(3);
	root->left->left = create_node(4);
	root->left->right = create_node(5);
	root->right->left = create_node(6);
	root->right->right = create_node(7);

	tree_traversal(root);
	create_boustrophedon_order(root, 0);
	cout << endl;

	map<int, queue<int>>::iterator itr_queue = my_map_lefttoright.begin();
	map<int, stack<int>>::iterator itr_stack = my_map_righttoleft.begin();

	for (; itr_queue != my_map_lefttoright.end(); itr_queue++) {
		cout << "level " << itr_queue->first << "-->";
		while (!itr_queue->second.empty()) {
			cout << itr_queue->second.front() << " ";
			itr_queue->second.pop();
		}
		cout << endl;
	}
	cout << endl;
	for (; itr_stack != my_map_righttoleft.end(); itr_stack++) {
		cout << "level " << itr_stack->first << "-->";
		while (!itr_stack->second.empty()) {
			cout << itr_stack->second.top() << " ";
			itr_stack->second.pop();
		}
		cout << endl;
	}
}
