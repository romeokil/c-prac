#include<iostream>//Height of the tree
using namespace std;
struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};

int FindHeight(BstNode* root){
	if(root==NULL)
	return -1;
	return max(FindHeight(root->left),FindHeight(root->right)) +1;
}


