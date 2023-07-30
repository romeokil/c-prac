//Detect loop/cycle in a linked list.
#include<iostream>
#include<map>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void insertathead(Node* &head,int data){ //insertathead in circular singly linked list
		Node* newnode=new Node(data);
		Node* temp=head;
		//IF No nodes are present
	if(head==NULL){
	newnode->next=newnode;
	head=newnode;
    }
    //If one node or more than one node is present
    else{
    while(temp->next!=head){
    	temp=temp->next;
	}
    newnode->next=head;
    temp->next=newnode;
    head=newnode;
    }
} 
void insertatany(Node* &head,int data,int pos){
	Node* newnode=new Node(data);
	Node* temp=head;
	//If no node is present
	if(head==NULL){
		newnode->next=newnode;
		head=newnode;
	}
	//If nodes are present
	else{
		//If inserting position is 1.
		if(pos==1){
			while(temp->next!=head){
				temp=temp->next;
			}
			newnode->next=head;
			temp->next=newnode;
			head=newnode;
		}
		//Insert position is other than 1.
		else{
			int cnt=1;
			while(cnt<pos-1){
				temp=temp->next;
				cnt++;
			}
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
}
void insertatend(Node* &head,int data){  //Insertatend in the circular singly linked list
	Node* newnode=new Node(data);
	Node* temp=head;
	//If no nodes are present
	if(head==NULL){
		newnode->next=newnode;
		head=newnode;
	}
	//If one node or more than one node is present
	else{
		while(temp->next!=head){
			temp=temp->next;
		}
		newnode->next=head;
		temp->next=newnode;
	}
}
bool isCircular(Node* &head){      //Detect whether it is circular linked list or not
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
bool DetectLoop(Node* &head){    //Detection of loop/Cycles in linked list
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

void display(Node* &head){
	//display function to traverse the list
	Node* temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=head);
	cout<<endl;
}
    int main(){
		Node* head=NULL;
		insertathead(head,2);
		display(head);	
		insertathead(head,3);
		display(head);
     	insertathead(head,4);
		display(head);
		insertathead(head,5);
		display(head);
		insertatend(head,7);
	    display(head);
	    insertatend(head,8);
	    display(head);
	    insertatend(head,9);
	    display(head);
	    insertatend(head,10);
	    display(head);
        insertatany(head,4,0);
		display(head);
		insertatany(head,6,1);
		display(head);	    
		insertatany(head,7,2);
	    display(head);
	    insertatany(head,9,3);
	    display(head);
	    insertatany(head,2,1);
	    display(head);
	    if(isCircular(head))
	    cout<<"Linked list is circular"<<endl;
        else
        cout<<"Linked list is not circular"<<endl;
        if(DetectLoop(head))
        cout<<"Loop is present in the given linked list";
        else
        cout<<"Loop is not present in the given linked list";
	return 0;
}

