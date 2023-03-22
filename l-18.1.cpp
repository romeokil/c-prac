//Insertion sort
#include<iostream>
#include<stdio.h>
using namespace std;
void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		bool check=false;
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
//				swap(arr[i],arr[i+1]);
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				check=true;
			}
		}
		if(check==false){
			break;
		}
	}
}
int main(){
	int n;
	cout<<"Enter the no of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubblesort(arr,n);
	cout<<"Array Elements after bubble sort"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
