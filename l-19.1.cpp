#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int,4> a ={2,3,4,5};
	cout<<a.size();
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<endl;
	}
	cout<<a.at(2);//gives the element at position/index 2
	cout<<a.front();//gives the front element in the array
	cout<<a.end();//gives the end element in the array
	cout<<a.empty();//gives 0 if array is empty if not then 1
	
	return 0;
}
