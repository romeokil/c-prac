#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		int current=arr[i];
		int j=i;
		while(j>0 && arr[j-1]>current){
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=current;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
