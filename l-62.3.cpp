//This is lecture no 62.3.cpp 
//Inorder,Preorder,Postorder Traversals.
#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
		int data;
		Node*left;
		Node*right;
		Node(int data){
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
};
Node* BuildTree(Node* root){    //Creation of the tree
	int data;
	cout<<"Enter the data"<<endl;
	cin>>data;
	root=new Node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the left data of the root data "<<data<<endl;   //taking data for left node of root
	root->left=BuildTree(root->left);
	cout<<"Enter the right data of the root data"<<data<<endl;   //Taking data for right node of root
	root->right=BuildTree(root->right);
	return root;
}
void levelorderTraversal(Node* root){             //Level Order Traversal
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
	    Node*temp=q.front();
	    q.pop();
		cout<<temp->data<<" ";
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
		
	}
}
void Inorder(Node* root){          //Inorder Traversal
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<endl;
	Inorder(root->right);
}
void Preorder(Node* root){       //Preorder Traversal
	if(root==NULL){
		return;
	}
	cout<<root->data<<endl;
	Preorder(root->left);
	Preorder(root->right);
}
void Postorder(Node* root){       //Postorder Traversal
	if(root==NULL){
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<endl;
}
int main(){
	
	Node* root=NULL;
	root=BuildTree(root);
	levelorderTraversal(root);
	cout<<endl;
	cout<<"Inorder Traversal-->"<<endl;
	Inorder(root);
	cout<<"Preorder Traversal-->"<<endl;
	Preorder(root);
	cout<<"Postorder Traversal-->"<<endl;
	Postorder(root);
	return 0;
}

