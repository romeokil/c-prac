//Implementing queue(First in First Out) using oops concept we are making functions by your own.
#include<iostream>
using namespace std;
class Queue{
	public:
	int size;
	int *arr;
	int front;
	int rear;
	Queue(int size){
		this->size=size;
		arr=new int[size];
		front=0;
		rear=0;
	}
	void push(int element){
		if(rear==size){
			cout<<"Queue overflow can't insert element"<<endl;
			return;
		}
		else{
			arr[rear]=element;
			rear++;
		}
	}
	void pop(){
		if(front==rear){
			cout<<"Queue underflow can't delete element"<<endl;
		}
		else{
			front++;
			if(front==rear){
				front==0;
				rear=0;
			}
			
		}
	}
	void isEmpty(){
		if(front==rear){
			cout<<"Queue is empty"<<endl;
		}
		else{
			cout<<"Queue is not empty"<<endl;
		}
	}
	void frontElement(){
		if(front==rear){
			cout<<"No element is present in the queue"<<endl;
		}
		else{
			cout<<"Front Element is "<<arr[front]<<endl;
		}
	}
	void display(){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}	
		cout<<endl;
	}
};
int main(){
	Queue q(6);
	q.push(1);  //Pushing the element.
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.display();
	q.frontElement();//always shows the front element in this case it is 1.
	q.pop();
	q.frontElement();//always shows the front element in this case it is 2.
	q.pop();
	q.frontElement();//always shows the front element in this case it is 3.
	q.pop();
	q.pop();
	q.pop();
	q.pop();//popping elements
	q.isEmpty();//If we are popping elements then after popping six times it shows queue is empty.
}
