#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int low=0,high=n-1;
    while(low<=high){
    	int mid=low+(high-low)/2;;
    	if(arr[mid]==key){
    		return mid;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else {
		
		   high=mid-1;
	}
}
return -1;
	
}

int main(){
	int n;
	int arr[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binarysearch(arr,n,key);
	return 0;
}
