//Deletion in doubly linked list
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
void insertathead(Node* &head,int data){   //function insertathead
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
void insertatend(Node *&head,int data){    //function insertatend
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
void insertatany(Node* &head,int pos,int data){  //function insertatany
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

void deleteathead(Node* &head){                     //deleteathead
	if(head==NULL){
		cout<<"No nodes are available ";
		return ;
	}
	else{
		Node*temp=head;
		head=head->next;
		head->prev=NULL;
		delete(temp);
	}
}
void deleteatend(Node* &head){                       //deleteatend
	if(head==NULL){  
		cout<<"No nodes are available";
		return ;
	}
	else{
	     Node *temp1=head;
	     Node *last=head;
	     while(temp1->next!=NULL){
	     	last=temp1;
	     	temp1=temp1->next;
		 }
		 last->next=NULL;
		 delete(temp1);
	}
}
void deleteatany(Node* &head,int pos){                   //deleteatany
	if(head==NULL){
		cout<<"No nodes are available";
		return;
	}

	else{
		if(pos==1){
			deleteathead(head);
			return;
		}
		int cnt=1;
		Node *temp=head;
		Node *temp1=head;
		while(cnt<pos){
			temp1=temp;
			temp=temp->next;
			cnt++;
		}
		if(temp->next==NULL){
			deleteatend(head);
			return;
		}
//		temp->prev=NULL;
		temp1->next=temp->next;   //using 2 pointer ek pointer ke help se bhi ho skta hai 4
		temp->next->prev=temp1;   //try krna
	    delete temp;
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
    deleteathead(head);
    print(head);
    deleteatend(head);
    print(head);
    deleteatany(head,7);
    print(head);
		return 0;
}
