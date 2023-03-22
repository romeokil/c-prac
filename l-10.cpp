#include<iostream>
using namespace std;

int dup(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	for(int i=1;i<n;i++){
		ans=ans^i;
	}
   return ans;
}
int main(){
	int n,x,arr[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	x=dup(arr,n);
	cout<<x;
	
	return 0;
}
