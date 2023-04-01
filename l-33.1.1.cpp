#include<iostream>
using namespace std;
int issorted(int arr[],int n,int s,int e){
	if(n==1|| n==0){
		return 1;
	}
	if(s==e-1){
		return 1;
	}
	if(arr[s]<arr[s+1]){
		s++;
	}
	if(arr[s]>arr[s+1]){
		return 0;
	}
    issorted(arr,n,s,e);
}
int main(){
	int n,key,flag;
    cout<<"enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	flag=issorted(arr,n,0,n-1);
	if(flag==1){
		cout<<"Array is sorted";
			}
	else{
		cout<<"Array is not sorted";
	}
	return 0;
}
