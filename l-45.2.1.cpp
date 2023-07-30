//Count of the middle node in the linked list
//Basically question ye tha ki wo node return krna tha jo middle me hai.
//Approach-1 ye easy wala hai jo sb soch leta hai wo 
//slow fast wala thoda interesting hai wo dekhna l-45.2.2.cpp me
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
	int count(Node *head){
	   int c=0;
	   Node*temp1=head;
	   while(temp1!=NULL){
	   	c++;
	   	temp1=temp1->next;
	   }	
	   return (c/2)+1;
	   
//	   int pos=1;
//	   while(pos<c){        Will give the node which is in middle and
//	   	temp2=temp2->next;  you have to change the return type of the function
//	   }                    from int to Node*.
//	   return temp2;        Ab recieve krne ke liye bhi ek Node* type ka pointer chahiye
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
    insertathead(head,14);
    print(head);
    cout<<endl;
    insertatend(head,15);
    print(head);
    cout<<endl;
    insertatpos(head,3,18);
    print(head);
    cout<<endl;
    cout<<"Middle node in the linked list is "<<count(head)<<endl;
    return 0;
}
