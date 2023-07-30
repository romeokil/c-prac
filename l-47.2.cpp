//Remove cycle in linked list
//Get the starting node of loop/Cycle in the linked list.
//We will use floyd Cycle detection algorithm to find it.
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
Node* floydDetectLoop(Node* &head){      //Detection of Loops in the linked list
                                           // using floydDetectionCycle algo.
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
			cout<<"data present at "<<slow->data<<endl;
			return slow;
		}
	}
	return false;
}
Node* getStartingNode(Node* &head){      //Get the starting node of the loop in the linked list
	if(head==NULL){                      //Using floydDetectionCycle
		return NULL;
	}
	Node* intersection=floydDetectLoop(head);
	Node* slow=head;
	
	while(slow!=intersection){
		slow=slow->next;
		intersection=intersection->next;
	}
	return slow;
}
void removeCycle(Node* &head){
	if(head==NULL)
	return;
	
	Node* startOfLoop=getStartingNode(head);
	Node* temp=startOfLoop;
	while(temp->next!=startOfLoop){
		temp=temp->next;
	}
	temp->next=NULL;
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
        cout<<"Loop is present in the given linked list"<<endl;
        else
        cout<<"Loop is not present in the given linked list"<<endl;
//        if(floydDetectLoop(head))
//        cout<<"Loop is present in the given linked list"<<endl;
//        else
//        cout<<"Loop is not present in the given linked list"<<endl;
        Node* loop=getStartingNode(head);
        cout<<"Starting of the loop is-> "<<loop->data<<" ";
        
        removeCycle(head);
        display(head);
	return 0;
}

