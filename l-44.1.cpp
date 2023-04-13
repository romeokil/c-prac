//Introduction of singly linked list
//Insertion at head,Insertion at any position and Insertion at end
#include<iostream>
using  namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
	void insertathead(Node* &head,int data){
		//Creating a new node
		Node *newnode=new Node(data);
		newnode->next=head;
	    head=newnode;
	}
	void insertatpos(Node* &head,int pos,int data){
		Node *temp1=head;
		Node *newnode=new Node(data);
		if(pos==1){
			newnode->next=head;
			head=newnode;
		}
		if(pos>1){
		int i=1;
		while(i<pos-1){
			temp1=temp1->next;
			i++;
		}
		newnode->next=temp1->next;
		temp1->next=newnode;
	     }
	}
	void insertatend(Node* &head,int data){
	    Node *newnode=new Node(data);
	    Node*slast=head;
	    while(slast->next!=NULL){
	    	slast=slast->next;
		}
		slast->next=newnode;
		newnode->next=NULL;
	    
	}
	void print(Node* &head){
		Node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};

int main(){
	Node *node1=new Node(10);
	Node *head=node1;
	node1->print(head);
	cout<<endl;
	node1->insertathead(head,12);
	node1->print(head);
	cout<<endl;
	node1->insertathead(head,13);
    node1->print(head);
    cout<<endl;
    node1->insertathead(head,14);
    node1->print(head);
    cout<<endl;
    node1->insertatend(head,15);
    node1->print(head);
    cout<<endl;
    node1->insertatpos(head,6,18);
    node1->print(head);
    cout<<endl;
	
}
