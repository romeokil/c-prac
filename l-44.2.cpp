//Deletion in singly linked list

#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node*next;
	Node(int data){ //Making of class node
		this->data=data;
		this->next=NULL;
	}
	void insertathead(Node* &head,int data){   //function insertathead
		Node *newnode=new Node(data);
		newnode->next=head;
		head=newnode;
	} 
	void insertatany(Node*&head,int pos,int data){ //function insertatany
		Node *newnode=new Node(data);
		Node *temp=head;
		if(pos==1){
			newnode->next=head;
			head=newnode;
		}
		if(pos>1){
		int cnt=1;
		while(cnt<pos-1){
			temp=temp->next;
			cnt++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	   }
		
	}
	void insertatend(Node * &head,int data){   //function insertatend
	    Node *newnode=new Node(data);
	    Node *slast=head;
	    while(slast->next!=NULL){
	    	slast=slast->next;
		}
		slast->next=newnode;
	}
	
	void print(Node* &head){                 //function print
		Node *temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<endl;
	}
	void deletefront(Node*&head){            //function deletefront
		Node*temp=head;
		head=head->next;
		delete(temp);
	}
	void deleteany(Node*head,int pos){       //function delete any
		Node *temp2=head;
		Node *prev=head;
		int cnt=1;
		while(cnt<pos){
			prev=temp2;
			temp2=temp2->next;
			cnt++;
		}
	    prev->next=temp2->next;
		delete(temp2);
	}
	void deleteend(Node* &head){             //function deleteend
		Node *temp1=head;
		Node *last=head;
		while(temp1->next!=NULL){
			last=temp1;
			temp1=temp1->next;
		}
		last->next=NULL;
		delete(temp1);
	}
};
int main(){
	Node *node1=new Node(10);
	Node *head=node1;
	cout<<"Insertion of 1 element"<<endl;
	node1->print(head);
	cout<<"Insertion from front 2 elements"<<endl;
	node1->insertathead(head,11);
	node1->print(head);
	cout<<"Insertion from front of 3rd element "<<endl;
	node1->insertathead(head,12);
	node1->print(head);
	cout<<"Insertion from end of 4th element"<<endl;
	node1->insertatend(head,13);
	node1->print(head);
	cout<<"Insertion from end of 5th element"<<endl;
	node1->insertatend(head,15);
	node1->print(head);
	cout<<"Insertion at pos 3 of the 6th element"<<endl;
	node1->insertatany(head,3,14);
	node1->print(head);
	cout<<"Insertion at pos 7 of the 7th element"<<endl;
	node1->insertatany(head,7,16);
	node1->print(head);
	cout<<"First element deleted"<<endl;
	node1->deletefront(head);
	node1->print(head);
	cout<<"Last element deleted"<<endl;
	node1->deleteend(head);
	node1->print(head);
	cout<<"Delete element from 3"<<endl;
	node1->deleteany(head,3);
	node1->print(head);
}


