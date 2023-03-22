#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node *head=NULL;//declares head pointer globally
void insert(int x){
	Node* temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->link=head;
	head=temp;
}
void print(){
  Node* temp=head;
  cout<<"List is: ";
  while(temp!=NULL){
  	cout<<temp->data<<" ";
  	temp=temp->link;
  }	
  cout<<"\n";
}
int main(){
	int n,x;
	cout<<"How Many Numbers";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the no";
		cin>>x;
		insert(x);
		print();
	}
	cout<<"\n";
	return 0;
}

