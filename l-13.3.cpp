#include<iostream>
using namespace std;

int peakind(int arr[],int n){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
			return mid;
		}
		else if(arr[mid]<arr[mid-1]){
		   high=mid-1;
		}
		else
		   low=mid+1;
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cout<<peakind(arr,n)<<endl;
	return 0;
}
