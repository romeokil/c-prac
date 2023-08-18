//Introduction of the queue some common operation like push,pop,q.empty,q.pop
#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q;
	q.push(2);
	cout<<"Front element of the queue is: "<<q.front()<<endl;
	cout<<"Size of an queue is: "<<q.size()<<endl;
	q.push(3);
	cout<<"Front element of the queue is: "<<q.front()<<endl;
	cout<<"Size of an queue is: "<<q.size()<<endl;
	q.push(5);
	cout<<"Front element of the queue is: "<<q.front()<<endl;
	cout<<"Size of an queue is: "<<q.size()<<endl;
	q.pop();
	q.pop();	
	q.pop();
	if(q.empty()){
		cout<<"Queue is empty";
	}
	else{
		cout<<"Queue is not empty";
	}
	
	
	return 0;
}

