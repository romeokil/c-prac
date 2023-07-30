//Insertion in circular singly linked list
//Love Babbar bhaiya ka technique hai jo lec-44.5.2.cpp hai wo apna wala technique hai.
//Love Babbar bhaiya information ka respect me bnae hai or hmlog postion ke respect me bnae hai
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node*next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void insertany(Node* &tail,int element,int data){
	//no node is present
	if(tail==NULL){
		Node *newnode=new Node(data);
		newnode->next=newnode;
		tail=newnode;
	}
	else{
	//node is present
	Node *cur=tail;
	while(cur->data!=element){
		cur=cur->next;
	}
    Node *temp=new Node(data);
    temp->next=cur->next;
    cur->next=temp;
   }
}
void print(Node *tail){
	Node *temp=tail;
	do{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	while(temp!=tail);
	cout<<endl;
}
int main(){
	Node *tail=NULL;
	insertany(tail,5,3);
	print(tail);
	insertany(tail,3,5);
	print(tail);
	insertany(tail,5,7);
	print(tail);
	insertany(tail,7,8);
	print(tail);
	insertany(tail,5,2);
	print(tail);
	insertany(tail,7,9);
	print(tail);
}
