#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* head=NULL;
int data,y;
void insertany(int data,int pos){
	Node* temp1=new Node();
	temp1->data=data;
	temp1->link=NULL;
	if(pos==1){
		temp1->link=head;
		head=temp1;
		return ;
	}
	
	Node* temp2=head;
	for(int i=0;i<2;i++){
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
while(1){
	int x;
	cout<<"\n\n     ---Welcome to the menu based linked list part-2---    \n\n";
	cout<<"\n          1->Insertion of element at the desired position \n";
	cout<<"\n          2->Display of the existing element \n ";
	cout<<"\n          3->For Exit\n";
	cin>>x;
	switch(x){
		 case 1:cout<<"enter the element you want to insert";
		        cin>>data;
		        cout<<"enter the position you want to insert";
		        cin>>y;
				 insertany(data,y);
				 cout<<"Element inserted successfully";
		         break;
		 case 2:cout<<"The element in the linked list is ";
		         print();
		         break;
		 case 3:exit(0);
		         break;
		 default:cout<<"You have wrong choice";
	}
}
return 0;
}
