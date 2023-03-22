#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cout<<"enter the value of n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<endl<<"element"<<" "<<i+1<<" ";
		cin>>arr[i];
	}
	int c=0;
for(int i=0;i<n;i++){
	
	c=max(c,arr[i]);
	}
	cout<<c;
	
	
	return 0;
}
