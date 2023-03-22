#include<iostream>
using namespace std;
void reverse(int arr[],int n){
	for(int i=0;i<n/2;i++){
	
	int first=arr[i];
	int second=arr[n-i-1];
	arr[i]=second;
	arr[n-i-1]=first;
      }
}
int main(){
	int n;
	cout<<"enter the no of elements\n";
	cin>>n;
	int arr[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}	
	reverse(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
