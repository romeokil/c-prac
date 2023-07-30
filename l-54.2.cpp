//This is lecture no 54.2 in which we are implementing the stacks using arrays.
#include<iostream>
using namespace std;
class Stacks{
	public:
		int *arr;
		int top;
		int size;
		
		Stacks(int size){
			this->size=size;
			arr=new int[size];
			top=-1;
		}
		void push(int element){
			if(top==size-1){
				cout<<"Stack overflow"<<endl;
				return;
			}
			else{
				top++;
				arr[top]=element;
			}
		}
		void pop(){
			if(top==-1){
				cout<<"Stack underflow"<<endl;
			}
			top--;
		}
		void isempty(){
			if(top==-1){
				cout<<"Yes it is a empty stack"<<endl;
			}
			else
		    	cout<<"No it's not a empty stack"<<endl;
		}
		void topElement(){
			if(top==-1){
				cout<<"No elements are present"<<endl;
			}
			else
				cout<<"Top element of the stack is "<<arr[top]<<endl;
		}
        void display(){
        	cout<<"The stack element is "<<endl;
        	for(int i=0;i<size;i++){
        		cout<<arr[i]<<" ";
			}
		}
};

int main(){
	
	Stacks s(6);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.pop();
	s.isempty();
	s.topElement();
	s.display();
	return 0;
}
