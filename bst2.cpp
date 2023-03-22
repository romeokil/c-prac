//Find the minimum and maximum element of the tree
#include<iostream>
using namespaces std;
struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};
int Findmin(BstNode* root){//With recursion for finding the minimum element in the tree
	if(root==NULL){
		cout<<"No elements in the tree";
		return -1;
	}
	else if(root->left==NULL){
		return root->data;
	}
	else{
		returnFindmin(root->left);
	}
}
int Findmin(BstNode* root){//Without recursion for finding the minimum element in the tree
	if(root==NULL){
		cout<<"No elements in the tree";
		return -1;
	}
	else{
		while(root->left!=NULL)
		root=root->left;
		return root-data;
	}
}
int Findmax(BstNode* root){//With recursion finding the maximum element in the tree
	if(root==NULL){
		cout<<"No elements in the tree";
		return -1;
	}
	else if(root->right==NULL){
	    return root->data;
	}
	else 
	return Findmax(root->right);
}
int Findmax(BstNode* root){//Without recursion finding the maximum element in the tree
	if(root==NULL){
	    cout<<"No elements in the tree";
	    return -1;
	}
	while(root->right!=NULL)
		root=root->right;
	    return root->data;
}
