#include<iostream>
using namespace std;

int main()
{   
   int n,temp;
   
   	cout<<"enter the no upto you want to array";
	cin>>n;
	int arr[n]; 	
	cout<<"enter the nos to fill array";
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
		
			if(arr[j]<arr[i])
			{
	    	temp=arr[j];
			arr[j]=arr[i];
	    	arr[i]=temp;
			}
		}	
		
	}
	cout<<"{";
	for(int i=0;i<n;i++){
		if(n-i==1){
			cout<<arr[i]<<"}";
		}
		else{
		
	      cout<<arr[i]<<",";	
}
	}
	
	
return 0;
}
