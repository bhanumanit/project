#include<iostream>
#include<queue>
using namespace std;
struct node {
	int data;
	node* left, * right;
	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};
void level_order(node* root) {
	//using queue to implement level_order
	if (root == NULL)
		return;
	queue<node*> q;
	q.push(root);
	while (!q.empty()) {
		node* temp = q.front();
		q.pop();
		cout << temp->data;
		if (temp->left)
			q.push(temp->left);
		if (temp->right)
			q.push(temp->right);
	}
}

int main() {
	node* root = new node(8);
	root->left = new node(6);
	root->left->left = new node(5);
	root->right = new node(10);
	root->right->right = new node(11);
	root->right->left = new node(9);
	level_order(root);

}
