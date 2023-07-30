//Reverse a linked list
//Using Recursive way Approach-3 
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
	Node* reverse(Node* &head){
		Node *cur=head;
        Node *prev=NULL;
    	if(head==NULL || head->next==NULL){
	        return head; 
	    }
	    Node *chotahead=reverse(head->next);
	    head->next->next=head;
	    head->next=NULL;
	    
	    return chotahead;
    }
    void display(Node* head){
    	Node *temp1=head;
	    while(temp1!=NULL){
		   cout<<temp1->data<<" ";
		   cout<<endl;
		   temp1=temp1->next;
		}
    }
int main(){
	Node* head=NULL;
	insertathead(head,10);
	print(head);
	cout<<endl;
	insertathead(head,12);
    print(head);
	cout<<endl;
	insertathead(head,13);
    print(head);
    cout<<endl;
    insertathead(head,14);
    print(head);
    cout<<endl;
    insertatend(head,15);
    print(head);
    cout<<endl;
    insertatpos(head,3,18);
    print(head);
    cout<<endl;
    cout<<"Reversed list by recursion approach-3"<<endl;
    Node* head1=reverse(head);
    display(head1);
}
