//Introduction to trees 
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
Node* BuildTree(Node* root){
	int data;
	cout<<"Enter the data"<<endl;
	cin>>data;
	root=new Node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data in the left of "<<data<<endl;
	root->left=BuildTree(root->left);
	cout<<"Enter the data in the right of "<<data<<endl;
	root->right=BuildTree(root->right);
	return root;
}
//Bhai ye level order Traversal ni hai wo bs hm aise hi try kr rhe the.
//void levelorderTraversal(Node* root){
//	if(root!=NULL){
//		cout<<root->data<<" ";
//	}
//	else{
//		return;
//	}
//	levelorderTraversal(root->left);
//	levelorderTraversal(root->right);
//}
int main(){
	Node* root=NULL;
	root=BuildTree(root);
//	levelorderTraversal(root);
	return 0;
}
