#include<iostream>
#include<queue>
using namespace std;
int main(){
	//max heap
	priority_queue<int> maxi;
	//min heap
	priority_queue<int,vector<int>,greater<int> >mini;
	//Pushing the element in the max heap
	maxi.push(1);
	maxi.push(2);
	maxi.push(3);
	maxi.push(4);
	cout<<"Size of the maxi priority queue is->"<<maxi.size()<<endl;
	int n=maxi.size();
	for(int i=0;i<n;i++){
		cout<<maxi.top()<<" ";
		maxi.pop();
	}
	cout<<endl;
	cout<<"Khali hai ky lounde-->"<<maxi.empty()<<endl;
	//Pushing the element in minimum heap
	
	mini.push(4);
	mini.push(5);
	mini.push(6);
	mini.push(7);
	mini.push(9);
	cout<<"Size of the minimum heap is--> "<<mini.size()<<endl;
	int m=mini.size();
	for(int i=0;i<=n;i++){
		cout<<mini.top()<<" ";
		mini.pop();
	}
	cout<<endl;
	return 0;
}
