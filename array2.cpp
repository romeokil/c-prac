#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{  int s=0,e=n;
  int mid=(s+e)/2;
  while (s<=e){
  if(arr[mid]==key){
  
  return mid;}
  else if(arr[mid]>key){
  
  e=mid-1;}
  else{
  
  s=mid+1;}
  
}
return-1;
	}
	
int main(){
	int n; 
	int key;
	cout<<"enter the no upto you want array";
 cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
		cout<<"enter the no you want to search";
 cin>>key;
 int fg;
	fg=binarysearch(arr,n,key);
	if(fg<0){
		cout<<" The elemetn dosent exist in the array";
		
	}
	else{
		cout<<" the element found at positioion : "<< fg;
	}
	return 0;
}
