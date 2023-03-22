#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"enter number of elemnts in list: ";
	cin>>n;
	int arr[n];
	
	cout<<" enter numbers in list: ";
	for(int i=0;i<n;i++){
		cout<<" element- "<<i+1<<":";
		cin>>arr[i];
	}
	
	// sorting algo bubble sort
	int temp;
	int counter=0;
	while(counter<n){
		for(int k=0;k<n;k++){
			
			if(arr[k]>arr[k+1]){
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
				
			}
			
			
		}
		counter++;
	}
	
	// showing the list;
	
	cout<<"{";
	for(int l=0;l<n;l++){
		if(n-l==1){
			cout<<arr[l]<<"}";
			
		}
		else{
			cout<<arr[l]<<",";
		}
	}


	
	return 0;
}
