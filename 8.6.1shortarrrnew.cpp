#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cout<<"enter the no of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//operation for printing subarrays(kadanes algorithm)
	int maxsum=INT_MIN;
	int cursum=0;
	for(int i=0;i<n;i++){
		cursum=cursum+arr[i];
		maxsum=max(maxsum,cursum);
	    if(arr[i]<0)
		cursum=0;
	    
	}
	cout<<"Maximum subarray sum is "<<" "<<maxsum;
	return 0;
}
