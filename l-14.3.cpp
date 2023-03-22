#include<iostream>
#include<math.h>
using namespace std;

int squareroot(int arr[],int n,int key){
	int low=0,high=n-1,mid;
	while(low<=high){
	mid=low+(high-low)/2;
	if(pow(arr[mid],2)==key){
		return mid;
	}
    else if(pow(arr[mid],2)>key) 
	 high=mid-1;
	else
	low=mid+1;

}
return -1;
}
int moreprecision(int n,int precision,int temp){
	double ans=temp;
	double factor=1;
	for(int i=0;i<precision;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
	int n,key;
	cin>>n;
	int arr[40];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	cout<<squareroot(arr,n,key);
	int x=squareroot(arr,n,key);
	cout<<moreprecision(n,3,x);
	return 0;
}
