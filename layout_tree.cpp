#include<iostream>
using namespace std;
struct node {
	int data;
	node *left, * right;
	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};

int main() {
	node* root = new node(8);
	root->left = new node(6);
	root->left->left = new node(5);
	root->right = new node(10);
	root->right->right = new node(11);
	root->right->left = new node(9);

}
