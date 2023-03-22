#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	vector<int> a(5,1);//Initializes the vector with capacity of 5 and default value is 1
	vector<int> last(a);//copying the vector a in the vector last
	cout<<"Print a"<<endl;
	for(int i:a){
		cout<<i;
	}
	cout<<"Capacity-->"<<v.capacity()<<endl;
	cout<<"Size-->"<<v.size()<<endl;
	v.push_back(1);
	cout<<"Capacity-->"<<v.capacity()<<endl;
	cout<<"Size-->"<<v.size()<<endl;
	v.push_back(2);
	cout<<"Capacity-->"<<v.capacity()<<endl;
	cout<<"Size-->"<<v.size()<<endl;
	v.push_back(3);
	cout<<"Capacity-->"<<v.capacity()<<endl;
	cout<<"Size-->"<<v.size()<<endl;
	
	cout<<"Element at index 2-->"<<v.at(2)<<endl;
	cout<<"Front element is-->"<<v.front()<<endl;
	cout<<"Last element is-->"<<v.back()<<endl;
	cout<<"Vector is empty-->"<<v.empty()<<endl;
	//---->Popping
	cout<<"Before popping"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.pop_back();
	cout<<"After popping"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
    //--->clearing the vector
    cout<<"Before clearing the vector-->"<<v.size()<<endl;
    v.clear();
    cout<<"After clearing the vector-->"<<v.size()<<endl;
    
	
	return 0;
}
