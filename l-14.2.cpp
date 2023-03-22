#include<iostream>
using namespace std;
int searchsr(int arr[],int n){
	int low=0,high=n-1,mid;
	while(low<high){
		mid=low+(high-low)/2;
		if(arr[mid]>=arr[0]){
			low=mid+1;
		}
		else
		  high=mid;
	}
	return low;
}
int binarysearch(int arr[],int s,int e,int key){
	int low=s,high=e;
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
int position(int arr[],int n,int key){
	int pivot=searchsr(arr,n);
	if(arr[pivot]<=key && arr[n-1]>=key){
	return binarysearch(arr,pivot,n-1,key);
	}
	else{
	return binarysearch(arr,0,pivot-1,key);
	}
	
}
int main(){

	int n,key;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	cout<<"Target is at "<<position(arr,n,key)<<endl;
	cout<<"Pivot is "<<searchsr(arr,n);
	return 0;
	
}
