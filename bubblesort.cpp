#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		    }
		}
	}
	
}
int main(){
	int n;
	cout<<"enter the no of elements";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"before sorting"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	bubblesort(arr,n);
	cout<<"after sorting"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
