#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the no of elements";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++){
	  cout<<endl<<" element " <<i+1<<": ";
	  cin>>arr[i];
	}
	int temp;
	for(int j=0;j<n-1;j++){
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
		
		  temp=arr[i];
		  arr[i]=arr[i+1];
		  arr[i+1]=temp;
	}
	}
    }
    
    //afterr sortibng
    
	cout<<"{";
	for(int l=0;l<n;l++){
		if(n-1==l)
		cout<<arr[l]<<"}";
		else
		cout<<arr[l]<<",";
	}
	
	return 0;
}
