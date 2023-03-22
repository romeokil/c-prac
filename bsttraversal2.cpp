#include<iostream>
using namespace std;
struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};
void preorder(BstNode* root){
	if(root==NULL)
	return;
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
void inorder(BstNode* root){
	if(root==NULL)
	return;
	inorder(left->root);
	cout<<root->data;
	inorder(right->data);
}
void postorder(BstNode* root){
	if(root==NULL)
	return;
	postorder(left->root);
	postorder(right->root);
	cout<<root->data;
}
