#include<iostream>
using namespace std;
struct BstNode{
	int data;
	BstNode*left;
	BstNode*right;
};
bool isSubtreelesser(BstNode* root,int value);
bool isSubtreegreater(BstNode* root,int value);
bool isBinarySearchTree(BstNode* root){
	if(root==NULL)
	return true;
	if(isSubtreelesser(BstNode* left,root->data)
	&& isSubtreegreater(BstNode* right,root->data)
	&& isBinarySearch(root->left)
	&& isBinarySearch(root->right))
	return true;
	else
	return false;
}
bool IsSubtreeLesser(BstNode* root,int value){
	if(root==NULL)
	return true;
	if(root->data<=value && IsSubtreeLesser(root->left,root->data)
	&& IsSubtreeLesser(root->right,root->data))
	return true;
	else
	return false;
}
bool IsSubtreeGreater(BstNode* root,int value){
	if(root=NULL)
	return true;
	if(root->data>value && IsSubtreeGreater(root->left,root->data) 
	&& IsSubtreeGreater(root->right,root->data))
	return true;
	else
	return false;
}
