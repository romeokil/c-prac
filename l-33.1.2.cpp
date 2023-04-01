#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
	if(n==1|| n==0){
	 return 1;
    }
    else if(arr[0]>arr[1]){
    	return 0;
	}
	else{
		bool ans=issorted(arr+1,n-1);
		return ans;
	}
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
	flag=issorted(arr,n);
	if(flag==true){
		cout<<"Array is sorted";
			}
	else{
		cout<<"Array is not sorted";
	}
	return 0;
}
