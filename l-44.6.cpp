//Deletion in circular singly linked list
//We have declared head pointer globally so we don't have to write in any function parameter
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *link;
	Node(int data){
		this->data=data;
		this->link=NULL;
	}
};
Node *head=NULL;
void insertany(int data,int pos){
	//no node is present
	if(head==NULL){
		Node *newnode=new Node(data);
		newnode->link=newnode;
		head=newnode;
	}
    if(pos==1){
		Node *temp=head;
		Node *newnode=new Node(data);
		newnode->link=temp;
		while(temp->link!=head){
			temp=temp->link;
		}
		temp->link=newnode;
		head=newnode;
	}
	else{
		Node *temp=head;
		Node *newnode=new Node(data);
		int cnt=1;
		while(cnt<pos-1){
			temp=temp->link;
			cnt++;
		}
		newnode->link=temp->link;
		temp->link=newnode;
	}
}
void deleteany(int pos){
	if(head==NULL){
		cout<<"List is empty";
		return ;
	}
	if(pos==1){
		Node *temp=head;
		Node *temp1=head;
		while(temp->link!=head){
			temp=temp->link;
		}
		temp->link=temp1->link;
		head=temp1->link;
	    delete temp1;
	}
	else{
		Node *temp=head;
		Node *slast=head;
		int cnt=1;
		while(cnt<pos){
			slast=temp;
			temp=temp->link;
			cnt++;
		}
		slast->link=temp->link;
		delete temp;
	}
}
void print(){
	Node *temp=head;
	do{
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	while(temp->link!=head);
	cout<<endl;
}
int main(){
	insertany(3,1);
	print();
	insertany(2,2);
	print();
	insertany(5,3);
	print();
	insertany(6,2);
	print();
	insertany(7,5);
	print();
	insertany(9,1);
	print();
	insertany(10,1);
	print();
    deleteany(3);
    print();
    deleteany(1);
    print();
    deleteany(5);
    print();
	
return 0;
}
