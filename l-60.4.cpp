//This is lecture no 60.4.cp
//Deque implementation using stl.
#include<iostream>
#include<queue>
using namespace std;
int main(){
	deque<int>dq;
	dq.push_front(2);
	dq.push_back(3);
	cout<<"Front element in the queue is "<<dq.front()<<endl;
	cout<<"Rear element in the queue is "<<dq.back()<<endl;
	dq.pop_front();
	dq.pop_back();
	if(dq.empty()){
		cout<<"Dequeue is empty"<<endl;
	}
	else{
		cout<<"Dequeue is not empty"<<endl;
	}
	
	
	return 0;
}
