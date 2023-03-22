#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* head=NULL;
void insert(int data,int pos){//insert the data in the end of list
	Node* temp1=new Node();
	temp1->data=data;
	temp1->link=NULL;
	if(pos==1){
		temp1->link=head;
		head=temp1;
	    return ;
	}
	Node*temp2=head;
	for(int i=0;i<pos-2;i++){
		temp2=temp2->link;
	}
	temp1->link=temp2->link;
	temp2->link=temp1;
	}
void print(){//print all the elements in the linked list
   Node* temp=head;
   if(temp!=NULL){
   	cout<<temp->data;
   	temp=temp->link;
   }
   cout<<"\n";	
}
 void delete(int n){ 
	Node* temp1=head;
	if(n==1){
		head=temp1->link;
		free(temp1);
	}
	else{
	for(i=0;i<n-2;i++){
		temp1=temp1->link;//temp1 points to n-1th node
	}
	Node* temp2=temp1->link;
	temp1->link=temp2->link;
	free(temp2);
}
}
int main(){
	insert(2,1);//List: 2
	insert(3,2);
	insert(4,3);
	insert(5,4);//List :2 3 4 5
	cout<<"The linked list prior deletion is ";
	print();
	cout<<"enter the position of the element you want to delete";
	cin>>n;
	delete(n);
	cout<<"The linked list after deletion is";
	print();
	
	
	return 0;
}
