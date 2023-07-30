//Reverse a linked list
//Using a iterative method apun while loop use kiye hai yha pe
//Approach-1 while loop ke help se bna skte hai
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
};
Node *head=NULL;
	void insertathead(int data){
		//Creating a new node
		Node *newnode=new Node(data);
		newnode->next=head;
	    head=newnode;
	}
	void insertatpos(int pos,int data){
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
	void insertatend(int data){
	    Node *newnode=new Node(data);
	    Node*slast=head;
	    while(slast->next!=NULL){
	    	slast=slast->next;
		}
		slast->next=newnode;
		newnode->next=NULL;
	    
	}
	void print(){
		Node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	void reverse(){
	Node *cur=head;
	Node *forward=NULL;
	Node *prev=NULL;
	while(cur!=NULL){
		forward=cur->next;
		cur->next=prev;
		prev=cur;
		cur=forward;
	}
	head=prev;
   }
void display(){
	Node *temp1=head;
	while(temp1!=NULL){
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
}
int main(){
	insertathead(10);
	print();
	cout<<endl;
//	insertathead(12);
//    print();
//	cout<<endl;
//	insertathead(13);
//    print();
//    cout<<endl;
//    insertathead(14);
//    print();
//    cout<<endl;
//    insertatend(15);
//    print();
//    cout<<endl;
//    insertatpos(3,18);
//    print();
//    cout<<endl;
//    reverse();
//    display();
}
