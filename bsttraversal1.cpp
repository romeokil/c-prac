#include<iostream>
#include<queue>
using namespace std;
void levelorder(Node *root){
	if(root==NULL)
	return;
	queue<Node*> Q;
	Q.push(root);
	//we are taking atleast one node is present
	while(!Q.empty()){
		Node *current=Q.front();
		cout<<current->data<<" ";
		if(current->left!=NULL)
		Q.push(current->left);
		if(current->right!=NULL)
		Q.push(current->right);
	    Q.pop();//removing the element at front
	}
}
