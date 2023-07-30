//Insertion in circular singly linked list
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void insertany(Node* &head,int data,int pos){
	//no node is present
	if(head==NULL){
		Node *newnode=new Node(data);
		newnode->next=newnode;
		head=newnode;
	}
    if(pos==1){
		Node *temp=head;
		Node *newnode=new Node(data);
		newnode->next=temp;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newnode;
		head=newnode;
	}
	else{
		Node *temp=head;
		Node *newnode=new Node(data);
		int cnt=1;
		while(cnt<pos-1){
			temp=temp->next;
			cnt++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
void print(Node *head){
	Node *temp=head;
	do{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	while(temp->next!=head);
	cout<<endl;
}
int main(){
	Node *head=NULL;
	insertany(head,3,1);
	print(head);
	insertany(head,2,2);
	print(head);
	insertany(head,5,3);
	print(head);
	insertany(head,6,2);
	print(head);
	insertany(head,7,5);
	print(head);
	insertany(head,9,1);
	print(head);
	insertany(head,10,1);
	print(head);
	
return 0;
}
