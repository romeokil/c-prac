//This is lecture no 60.4.cp
//Deque implementation using stl.
//For Deque more operation refer documentation of cplusplus.
#include<iostream>
#include<queue>
using namespace std;
int main(){
	deque<int>dq;
	dq.push_front(2);//Pushing the element in the front
	dq.push_back(3);//Pushing the element in the back
	cout<<"Front element in the queue is "<<dq.front()<<endl;
	cout<<"Rear element in the queue is "<<dq.back()<<endl;
	dq.pop_front(); //popping the element from the front
	dq.pop_back();  //popping the element from the back
	if(dq.empty()){ //Checking deque is empty or not
		cout<<"Dequeue is empty"<<endl;
	}
	else{
		cout<<"Dequeue is not empty"<<endl;
	}
	
	
	return 0;
}
