#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node* getnode(int data){
	node* newnode = new node();
	newnode->data= data;
	newnode->left=newnode->right=NULL;
}
node* insert(node* root, int data){
	if(root == NULL)
		root = getnode(data);
	else if(data<=root->data)
		root->left=insert(root->left,data);
	else 
		root->right=insert(root->right,data);
	return root;
}
int inorder(node* root){
    if(root!=NULL){
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);}
}

int main(){
	node* root=NULL;
	root = insert(root,5);
	root = insert(root,15);
	root = insert(root,8);
	root = insert(root,50);
	root = insert(root,2);
	inorder(root);
}
