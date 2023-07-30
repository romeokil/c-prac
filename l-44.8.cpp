//Deletion in circular doubly linked list
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node *prev;
	Node(int data){
		this->data=data;
		this->prev=NULL;
		this->next=NULL;
	}
};
Node *head=NULL;
void insertatany(int data,int pos){
	if(head==NULL){
		Node *newnode=new Node(data);
		newnode->next=newnode;
		newnode->prev=newnode->next;
		head=newnode;
	}
	if(pos==1)
	{
		Node*newnode=new Node(data);
		Node*temp=head;
		newnode->next=temp;
    	newnode->prev=temp->prev;
    	temp->prev->next=newnode;
		temp->prev=newnode;
		head=newnode;
		
	}

	else{
		Node *newnode=new Node(data);
		Node *temp=head;
		int cnt=1;
		while(cnt<pos-1){
			temp=temp->next;
			cnt++;
		}
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
	}
}
void deleteatany(int pos){
	if(pos==1){
	Node *temp=head;
	temp->next->prev=temp->prev;
	temp->prev->next=temp->next;
	head=head->next;
	delete temp;
    }
    else{
    	Node *temp=head;
    	int cnt=1;
    	while(cnt<pos){
    		temp=temp->next;
    		cnt++;
		}
		temp->next->prev=temp->prev;
		temp->prev->next=temp->next;
		delete(temp);
	}
}
void print(){
	Node *temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp->next!=head);
	cout<<endl;
}
int main(){
	insertatany(3,1);
	print();
	insertatany(4,2);
	print();
	insertatany(5,3);
	print();
	insertatany(2,1);
	print();
	insertatany(6,4);
	print();
	deleteatany(1);
	print();
	deleteatany(3);
	print();
	deleteatany(3);
	print();
	deleteatany(1);
	print();
	
return 0;
}
