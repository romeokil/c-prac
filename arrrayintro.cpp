#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"enter the arr upto which you want to print";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
	}
	 for(int j=0;j<n;j++)
	 {
	 	
	 	cout<<arr[j];
	 	
	 }
	
	return 0;
	
}
