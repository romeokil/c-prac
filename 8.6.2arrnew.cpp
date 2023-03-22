#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
	int cursum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		cursum=cursum+arr[i];
		maxsum=max(maxsum,cursum);
		if(arr[i]<0)
			cursum=0;
	}
	return maxsum;
}

int main(){
	int n;
	cout<<"enter the no of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int nonwrapsum;
	int wrapsum;
	//finding maximum subarray sum
	int totalsum=0;
	for(int i=0;i<n;i++) 
	{
	    totalsum+=arr[i];
		arr[i]=-arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "
	}
	nonwrapsum=kadane(arr,n);
	cout<<nonwrapsum<<" $";
	wrapsum=totalsum+nonwrapsum;
	cout<<max(wrapsum,nonwrapsum)<<endl;

	return 0;
}
