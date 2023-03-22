#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
	int low=0;
	int high=n-1;
	while(low<=high){
	if(arr[low]+arr[high]==key){
		cout<<low<<" "<<high<<endl;
		return 1;
	}	
	else if(arr[low]+arr[high]<key)
    low=low+1;
	
	else
	high=high-1;
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int x=search(arr,n,key);
	cout<<x;
	return 0;
}
