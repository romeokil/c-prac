//Creating a Tree of levelorder Traversals.
#include<iostream>
#include<queue>
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
//Node* BuildTree(Node* root){
//	int data;
//	cout<<"Enter the data"<<endl;
//	cin>>data;
//	root=new Node(data);
//	if(data==-1){
//		return NULL;
//	}
//	cout<<"Enter the left data for the current root data "<<data<<endl;
//	root->left=BuildTree(root->left);
//	cout<<"Enter the right data for the current root data "<<data<<endl;
//	root->right=BuildTree(root->right);
//	return root;
//}
//void levelorderTraversal(Node* root){             //Level Order Traversal
//	queue<Node*>q;
//	q.push(root);
//	while(!q.empty()){
//	    Node*temp=q.front();
//	    q.pop();
//		cout<<temp->data<<" ";
//		if(temp->left){
//			q.push(temp->left);
//		}
//		if(temp->right){
//			q.push(temp->right);
//		}
//		
//	}
//}
void inorder(Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);
}
//void preorder(Node* root){
//	if(root==NULL){
//		return;
//	}
//	cout<<root->data<<endl;
//	preorder(root->left);
//	preorder(root->right);
//}
//void postorder(Node* root){
//	if(root==NULL){
//		return;
//	}
//	postorder(root->left);
//	postorder(root->right);
//	cout<<root->data<<endl;
//}
void BuildtreelevelorderTraversal(Node* &root){
	queue<Node*>q;
	int data;
	cout<<"Enter the root data"<<endl;
	cin>>data;
	root=new Node(data);
	q.push(root);
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		int leftdata,rightdata;
		cout<<"Enter the leftdata of the root data "<<temp->data<<endl;
		cin>>leftdata;
		if(leftdata!=-1){
		temp->left=new Node(leftdata);
		q.push(temp->left);
	    }
		cout<<"Enter the rightdata of the root data "<<temp->data<<endl;
		cin>>rightdata;
		if(rightdata!=-1){
		temp->right=new Node(rightdata);
		q.push(temp->right);
	    }
	}
}
int main(){
	Node* root=NULL;
//	root=BuildTree(root);
//	levelorderTraversal(root);
//	cout<<endl;
//	cout<<"Inorder Traversals"<<endl;
//	inorder(root);
//	cout<<"Preorder Traversals"<<endl;
//	preorder(root);
//	cout<<"Postorder Traversals"<<endl;
//	postorder(root);
	BuildtreelevelorderTraversal(root);
	inorder(root);
	return 0;
}
