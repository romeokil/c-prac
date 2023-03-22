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

	//operation for printing subarrays
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			
			for(int k=i;k<=j;k++){
				sum+=arr[k];
  			}
  			maxsum=max(maxsum,sum);
		}
	}
			cout<<"Maximum subarray sum is "<<maxsum;
	
	return 0;
}
