#include<iostream>
using namespace std;

int LinearSearch(int arr[],int key,int n){
	int i;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
		   return i; 
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"enter the no of elements in array";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
	}
	int key;	
	cout<<"enter the elements you want to find out ";
	cin>>key;
	LinearSearch(arr,key,n);
	return 0;
}
