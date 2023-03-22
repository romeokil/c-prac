#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
    Node* link;
};
Node *first=NULL;
void insert_front(int x){
	Node* newnode= new Node();
	newnode->data=x;
	if(first==NULL){
		newnode->link=NULL;
		first=newnode;
	}
	else{
		newnode->link=first;
		first=newnode;
	}
	Node*temp=first;
}
void delete_front(int pos){
	Node*temp=first;
	if(first==NULL){
		cout<<"List is already empty\n";
	}
	else{
		first=temp->link;
		free(temp);
	}
	Node*temp2=first;
	while(temp2!=NULL){
		cout<<temp2->data;
		temp2=temp2->link;
	}
	
}
void display(){
	cout<<"Tmhara elements yeh hai\n";
	Node*temp=first;
	while(temp!=NULL){
	   cout<<temp->data<<endl;
	   temp=temp->link;
	}
}
int main(){
	int y;
	cout<<"enter the no you want to insert\n";
	cin>>y;
	insert_front(y);
	display();
	delete_front(1);
	display();
}

