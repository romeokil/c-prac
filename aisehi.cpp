#include<iostream>
using namespace std;
int pivot(int arr[],int n){
	int low=0,high=n-1,mid;
	mid=low+(high-low)/2;
	while(low<high){
		
		if(arr[mid]>=arr[0]){
			low=mid+1;
		}
		else
		   high=mid;
		   mid=low+(high-low)/2;
	}
	return low;
}
int main(){
	int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Pivot element is "<<pivot(arr,n);
	return 0;
}
