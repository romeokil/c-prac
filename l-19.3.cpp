#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int> d;//Initialization
	d.push_back(1);//Pushing the element 1
	d.push_front(2);//Pushing the element 2 from front
	for(int i:d){//Iterating the deque
		cout<<i<<" ";
	}
// 	d.pop_front();//Popping the element from the front
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<"Element at position 0 is "<<d.at(0)<<endl;
	cout<<"Front element is "<<d.front()<<endl;
	cout<<"End element is "<<d.back()<<endl;
	cout<<"Checking deque is empty or not "<<d.empty()<<endl;
	cout<<"Before erase"<<endl;
	d.erase(d.begin(),d.begin()+1);//in erase we have to give from where we have to delete and
	//upto where we have to delete
	cout<<"After erase "<<d.size()<<endl;
	
	return 0;
}
