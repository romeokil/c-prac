#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int s,int e,int key){
	int mid=(s+e)/2;
	if(arr[mid]==key)
		return mid;
	else if(arr[mid]<key)
		s=mid+1;
	else
	    e=mid-1;
	binarysearch(arr,n,s,e,key);
}
int main(){
	int n,key;
    cout<<"enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	cout<<"enter the element you want to find";
	cin>>key;
	cout<<"Position at which element present is "<<binarysearch(arr,n,0,n-1,key);
	return 0;
}
