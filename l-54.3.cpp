#include<iostream>
using namespace std;
class twoStack{
	public:
		int *arr;
		int top1;
		int top2;
		int size;
		
		twoStack(int s){
			this->size=s;
			top1=-1;
			top2=size;
			arr=new int[s];
		}
		void push1(int element){
			if(top1!=size){
				top1++;
				arr[top1]=element;
			}
			else{
				cout<<"Stack is full or Stack overflow";
			}
		}
		void push2(int element){
			if(top2!=-1){
				top2--;
				arr[top2]=element;
			}
			else{
				cout<<"Stack is full or Stack overflow";
			}
		}
		void pop1(){
			if(top1==-1){
				cout<<"No Element is present in the stack";
			}
			else{
				top1--;
			}
		}
		void pop2(){
			if(top2==size){
				cout<<"No Element is present in the stack";
			}
			else{
				top2++;
			}
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<"The stack elements are "<<arr[i]<<endl;
			}
		} 
		void peak1(){
			cout<<"The top element of the stack1 is "<<arr[top1]<<endl;
		} 
		void peak2(){
			cout<<"The top element of the stack is "<<arr[top2]<<endl;
		}
};

int main(){
	twoStack ts(9);
	
	ts.push1(2);
	ts.push1(4);
	ts.push1(5);
	ts.push1(6);
	ts.push1(7);
	ts.push2(20);
	ts.push2(19);
	ts.push2(18);
	ts.push2(15);
	ts.peak1();
	ts.peak2();
	ts.pop1();
	ts.pop2();
	ts.peak1();
	ts.peak2();
	
	ts.display();
	
	
	
	return 0;
}
