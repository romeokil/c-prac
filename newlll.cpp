#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* head=NULL;
void inserttoany(int data){
	Node* temp1=new Node();
	temp1->data=data;
	temp1->link=head;
	head=temp1;
}
void print()
{
  Node* temp=head;
  
  while(temp!=NULL){
  	cout<<temp->data<<" ";
  	temp=temp->link;
  }	
  cout<<"\n";
}
int main(){
	while(1){
	
		int n,x,y;
	cout<<"\n\n----Welcome to menu based linked list----\n\n";
	cout<<"\n    1.Insertion of number in the linked list from the beginning\n";
	cout<<"\n    2.Display of the elements\n";
	cout<<"\n    3.For Exit\n";
	cout<<"\n   *** Please enter your choice from the above option ***\n";
	cin>>y;
	switch(y){
		case 1:
		   cout<<"enter how many no you want to enter";
	       cin>>n;
	        for(int i=0;i<n;i++){
		      cout<<"enter the no";
		      cin>>x;
		      inserttoany(x);
	        }
	        cout<<"Insertion is completed Successfully";
	        break;
        case 2:
        	cout<<"The list of element in the node is \n";
           		print();
           		break;
		case 3: exit(0);
		
		        break;
		default:cout<<"You have entered the wrong choice";       
	
	}
}
	return 0;
}
