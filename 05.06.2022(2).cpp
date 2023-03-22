#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
	 int s=0;
	 int e=n;
	 while(s<=e){
	 int mid=(s+e)/2;
	 if(arr[mid]==key){
	 	return mid;
	 }
	 else if(arr[mid]<key){
	 	s=mid+1;
	 }
	 else{
	 	e=mid-1;
	 
	}
    }
    return -1;
    }

	 
int main(){
	int n;
	cout<<"enter the element you want in array";
	cin>>n;
	int arr[n];
	cout<<"enter the element in the sorted array";
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	int key;
	cout<<"enter the element you want to find out";
	cin>>key;
	cout<<BinarySearch(arr,n,key);
	return 0;
}
