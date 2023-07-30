//Remove Duplicates from the unsorted singly linked list.
//3 approaches bhaiya btaye hai 3ino ko code kr.
#include<iostream>
#include<map>
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
void insertathead(Node* &head,int data){
	Node *newnode=new Node(data);
	newnode->next=head;
	head=newnode;
}
void insertatmiddle(Node* &head,int data,int pos){
	Node *temp=head;
	Node *prev=head;
	Node *newnode=new Node(data);
	int c=0;
	while(c<pos-1){
		prev=temp;
		temp=temp->next;
		c++;
	}
	newnode->next=temp;
	prev->next=newnode;
}
void insertatend(Node* &head,int data){
	Node *temp=head;
	Node *newnode=new Node(data);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	newnode->next=NULL;
	temp->next=newnode;
}
void removeDuplicates(Node* &head){     //Remove Duplicates function  for an unsorted lists
	Node* curr=head;
	Node* adv=curr->next;
	Node* prev=curr;
	while(curr!=NULL){
		while(adv!=NULL){
			if(curr->data==adv->data){
				Node* nodetodelete=adv;
				prev->next=adv->next;
				delete(nodetodelete);
			}
			    prev=adv;
				adv=adv->next;
		}
		curr=curr->next;	
	}
}
void display(Node * &head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node *head=NULL;
//	Node temp1= new Node(10);
//	temp1->display();
    insertathead(head,1);
    display(head);
    insertatend(head,4);
    display(head);
    insertatmiddle(head,2,2);
    display(head);
     insertatmiddle(head,2,3);
    display(head);
    insertatmiddle(head,3,4);
    display(head);
    insertatmiddle(head,3,5);
    display(head);
    insertatmiddle(head,3,6);
    display(head);
    insertatmiddle(head,3,7);
    display(head);
	removeDuplicates(head);
	display(head);
	return 0;
}
