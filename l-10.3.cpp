#include<iostream>
using namespace std;
int pairsum(int arr[],int n,int key){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==key){
				if(arr[i]<arr[j]){
					cout<<arr[i]<<" "<<arr[j]<<endl;
				}
				else{
					cout<<arr[j]<<" "<<arr[i]<<endl;
				}
				}
			}
		}
}
int main(){
	int n,key,arr[15];
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the elements";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	cout<<"enter the no upto you want to sum";
	cin>>key;
	pairsum(arr,n,key);
	return 0;
}
