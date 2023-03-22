#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* head=NULL;
void insert(int data,int pos){
	Node* temp1=new Node();
	temp1->data=data;
	temp1->link=NULL;
	if(pos==1){
		temp1->link=head;
		head=temp1;
		return;
	}
	Node* temp2=head;
	for(int i=0;i<pos-2;i++){
		temp2=temp2->link;
	}
	temp1->link=temp2->link;
	temp2->link=temp1;
}
void print(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<"\n";
	
}
int main(){
	insert(2,1);//List :2;
	insert(3,2);//List :2 3;
//	insert(4,1);//List :4 2 3; 
//	insert(5,2);//List :4 5 2 3;
//	insert(6,3);//List :4 5 6 2 3;	
	print();
	return 0;
}
