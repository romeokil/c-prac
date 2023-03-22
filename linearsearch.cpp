#include<iostream>
using namespace std;
int Linearsearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
		
	}
}
int main(){
	int n,key;
	cout<<"enter the value of n";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element you want to find out";
	cin>>key;
	cout<<"Postion of key "<<Linearsearch(arr,n,key);
	
	
	return 0;
}
