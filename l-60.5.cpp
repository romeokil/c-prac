//This is lecture no 60.5.cpp
//Deque implementation in class or making proper function.
#include<iostream>
#include<queue>
using namespace std;
class Deque{
	public:
		int size;
		int *arr;
		int front;
		int rear;
		Deque(int size){
			this->size=size;
			arr=new int[size];
			front=-1;
			rear=-1;
		}
		void push_front(int element){
			if((front==0 && rear=size-1)||(front!=0 && (rear=front-1)%(size-1))){     //Checking deque is full or not.
				cout<<"Deque is full or overflow,can't insert element";
			}
			else if(front==-1){  //pushing starting/first element.
				front=rear=0;
				arr[front]=element;
			}
			else if(front==0 && rear!=size-1){   //maintaining cyclic nature.
				front=size-1;
				arr[front]=element;
			}
			else{                //normal flow.
				front--;
				arr[front]=element;
			}
		}
		void push_rear(int element){
		if((front==0 && rear=size-1)||(front!=0 && (rear=front-1)%(size-1)){     //Checking deque is full or not.
				cout<<"Deque is full or overflow,can't insert element";
			}
			else if(front==-1){  //pushing starting/first element.
				front=rear=0;
				arr[rear]=element;
			}
			else if(rear==size-1 && front!=0){   //maintaining cyclic nature.
				rear=0;
				arr[rear]=element;
			}
			else{                //normal flow.
				rear++;
				arr[rear]=element;
			}	
			
		}
		void pop_front(){
			if(front==-1){
				cout<<"Can't pop the elements or underflow condition"<<endl;
			}
			else if(front=rear){
				front=rear=-1;
			}
			else if(front=size-1){
				front=0;
			}
			else{
				front++;
			}
			
		}
		void pop_rear(){
			if(front==-1){
				cout<<"Can't pop the elements or underflow condition"<<endl;
			}
			else if(front=rear){
				front=rear=-1;
			}
			else if(rear==0){
				rear=size-1
			}
			else{
				rear--;
			}	
		}
		void front(){
			if(front==-1){
				cout<<"No element is present";
			}
			else{
				cout<<"Front element is "<<arr[front]<<endl;
			}
		}
		void rear(){
			if(front==-1){
				cout<<"No element is present";
			}
			else{
				cout<<"Rear element is "<<arr[rear]<<endl;
			}
		}
};
int main()
{
	deque dq(6);
	dq.push_front(1);
	dq.push_back(2);	
	dq.front();
	dq.rear();
	return 0;
}
