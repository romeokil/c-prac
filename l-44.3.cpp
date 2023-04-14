//Introduction of doubly linked list
//Insertion in doubly linkedlist
//In this we also handled the case if head is pointing to NULL
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node*prev;
	Node*next;
	Node(int data){
		this->data=data;
		this->prev=NULL;
		this->next=NULL;
	}
};
void insertathead(Node* &head,int data){
	if(head==NULL){
		Node *temp=new Node(data);
		head=temp;
	}
	else{
	Node *newnode=new Node(data);
	newnode->next=head;
	head->prev=newnode->next;
	head=newnode;
   }
}
void insertatend(Node *&head,int data){
	if(head==NULL){
		Node *temp=new Node(data);
		head=temp;
	}
	else{
	Node *newnode=new Node(data);
	Node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp->next;
    }
}
void insertatany(Node* &head,int pos,int data){
	if(head==NULL){
		Node *temp=new Node(data);
		head=temp;
	}
    Node *newnode=new Node(data);
	Node *temp=head;
	int cnt=1;
	if(pos==1){
		insertathead(head,data);
		return;
	}
	else{
	while(cnt<pos-1){
		temp=temp->next;
		cnt++;
	}
    if(temp->next==NULL){
		insertatend(head,data);
		return ;
	}

	newnode->next=temp->next;
	temp->next->prev=newnode->next;
	temp->next=newnode;
    newnode->prev=temp->next;
   }
 }


//Gives length of the linked list
int length(Node* head){
	Node*temp=head;
	int len=0;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	return len;
}
//Traversing the linked list
void print(Node *head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node *node1=new Node(10);
	Node*head=NULL;
	print(head);
	insertathead(head,11);
	print(head);
	cout<<"Length of the current of the linked list"<<length(head)<<endl;
	insertatend(head,12);
	print(head);
	insertathead(head,8);
	print(head);
	insertatend(head,13);
	print(head);
	insertatany(head,3,6);
	print(head);
	insertatany(head,6,7);
	print(head);
	insertatany(head,1,5);
	print(head);
	insertatany(head,1,4);
	print(head);
	insertatany(head,9,15);
    print(head);
    insertatany(head,10,19);
    print(head);
    insertatany(head,6,20);
    print(head);
		return 0;
}
