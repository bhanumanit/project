//Implementation of tree data structure

#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
    node(int value){
    	data=value;
    	left=NULL;
    	right=NULL;
    }
};
int main(){
node *root= new node(5);
root->left= new node(4);
root->right= new node(3);
root->left->left= new node(2);
root->left->right= new node(1);
return 0;
}
