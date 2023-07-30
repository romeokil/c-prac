//Finding a middle element return the middle node 
//Appraoach 2 wo fast slow wala time complexity is same 
//Count wala approach bhi shi hai koi dikkt ni hai bs ye ek dusra approach hai.
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
	void print(Node* head){
		Node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	Node* findmiddlenode(Node *head){	
	   Node* slow=head;
	   Node* fast=head->next;
	   while(fast!=NULL){
	   	   fast=fast->next;
	   	   if(fast->next!=NULL){
	   	   	fast=fast->next;
			}
			slow=slow->next;
			return slow;
	    }
	}
int main(){
	Node* head=NULL;
	Node* cur=head;
	Node* prev=NULL;
	insertathead(head,10);
	print(head);
	cout<<endl;
	insertathead(head,12);
    print(head);
	cout<<endl;
	insertathead(head,13);
    print(head);
    cout<<endl;
//    insertathead(head,14);
//    print(head);
//    cout<<endl;
//    insertatend(head,15);
//    print(head);
//    cout<<endl;
    insertatpos(head,3,18);
    print(head);
    cout<<endl;
//  cout<<"Middle node in the linked list is "<<count(head)<<endl;
    Node* temp=findmiddlenode(head);
    cout<<"Address of the middle node which temp pointer is pointing "<<temp<<endl;
   return 0;
}
