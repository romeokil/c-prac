#include<iostream>
using namespace std;

int BinarySearch(int arr[],int key,int n){
	int low=0,high=n-1;
	while(low<=high)
	{
	int mid=(low+high)/2;
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]<key)
	low=mid+1;
	else 
	high=mid-1;
	
	}
	return -1;
}

int InfiniteSearch(int arr[],int key){
	int low=0,high=1;
	while(arr[high]<key){
		low=high;
		high=2*high;
		
	}
	return BinarySearch(arr,key,n);
}
int main(){
	int n,key;
	cout<<"enter the no of elements in array";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++)
	cin>>arr[n];
	cout<<"enter the element you want to find out ";
	cin>>key;
	cout<<InfiniteSearch(arr,key);
	return 0;
}
