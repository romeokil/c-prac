#include<iostream>
using namespace std;

void tripletsum(int arr[],int n,int key)
{
   for(int i=0;i<n-2;i++){
   	for(int j=i+1;j<n-1;j++){
   		for(int k=j+1;k<n;k++){
   			if(arr[i]+arr[j]+arr[k]==key){
   				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
			   }
		   }
	   }
   }	
}
int main(){
	int n,arr[15],key;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the elements upto which you want triplet sum";
	cin>>key;
	tripletsum(arr,n,key);
	return 0;
}
