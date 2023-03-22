#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the no of elements\n";
	cin>>n;
	int arr[n];
	cout<<"enter the no of elements\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i,j;
	for(i=0;i<n-1;i++){
		for( j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"The array elements be like\n";
	for(int i=0;i<n;i++){
	     cout<<arr[i]<<" ";
	}
	return 0;
}
	

