#include<iostream>
using namespace std;
void Insertionsort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}
}
int main(){
	int n;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array after insertion sort is "<<endl;
	Insertionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	}
