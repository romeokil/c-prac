#include<iostream>
using namespace std;

bool sort(int arr[], int n){
	if(n==1){
		return 1;
	}
	bool restarray= sort(arr+1,n-1);
    if( arr[0]<arr[1] && restarray ){
    	return 1;
	}
	else{
		return 0;
	}	
}

int main()
{
	int n;
	cout<<"enter the no of elements in array";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<sort(arr,n)<<endl;
	return 0;
}
