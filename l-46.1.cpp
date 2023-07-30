//Reverse a singly linked list in a k-groups
//Bhai dekho kuch galat ho rha hai kaam ni kaam rha hai ye code dekh lena.
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
bool isCircular(Node* &head){ //Jst to check is it circular linked list or not.
	Node *temp=head->next;
	if(head==NULL)
	return true;
	else{
		while((temp!=NULL) && (temp!=head)){
			temp=temp->next;
		}
		if(temp==NULL)
		return false;
		if(temp==head)
		return true;
	}
}
bool DetectLoop(Node* &head){   //Detection of cycles/Loop in given linked list
	Node*temp=head;
	if(head==NULL)
	return false;
	
	map<Node*,bool> visited;
	while(temp!=NULL){
		if(visited[temp]==true){
			return true;
		}
		visited[temp]=true;
		temp=temp->next;
		
	}
	return false;
}
bool floydDetectLoop(Node* &head){     //Detection of Loop in linked list using floydDetectionCycle algo.
	if(head==NULL)
	return false;
	
	Node* slow=head;
	Node* fast=head;
	while(slow!=NULL && fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
 		fast=fast->next;
        }
		slow=slow->next;
		
		if(fast==slow){
			cout<<"Data present at"<<slow->data<<endl;
			return true;
		}
	}
	return false;
}
void reverse(Node* &head){  //Reversing a singly linked list
	Node *curr=head;
	Node *prev=NULL;
	Node *forward=head;
	while(curr!=NULL){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	head=prev;
}

Node* Kreverse(Node* &head,int k){ //Reversing a singly linked list in K-groups
if(head==NULL){
	return NULL;
}
Node *curr=head;
Node *prev=NULL;
Node *forward=NULL;
int c=0;
while(curr!=NULL && c<k){
	forward=curr->next;
	curr->next=prev;
	prev=curr;
	curr=forward;
	c++;
	
	//Reversing a linked list of K-group
	if(forward!=NULL){
	head->next=Kreverse(forward,k);
	}
	//Checking after reversing K-groups of other elements
	return prev;
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
    insertathead(head,10);
    display(head);
    insertathead(head,12);
    display(head);
	insertatmiddle(head,11,2);
	display(head);
	insertatend(head,13);
	display(head);
//	reverse(head);
//	display(head);
//	head=Kreverse(head,2);
//	display(head);
// Checking for the circular linked list function is written in up.
        if(isCircular(head))
	    cout<<"Linked list is circular"<<endl;
        else
        cout<<"Linked list is not circular"<<endl;
         if(DetectLoop(head))
        cout<<"Loop is present in the given linked list"<<endl;
        else
        cout<<"Loop is not present in the given linked list"<<endl;
        if(floydDetectLoop(head))
        cout<<"Loop is present in the given linked list"<<endl;
        else
        cout<<"Loop is not present in the given linked list"<<endl;
	return 0;
}
