#include<iostream>
using namespace std;
 
 int main(){
 	int n,i,j;
 	cout<<"enter the no of elements you want in array ";
 	cin>>n;
 	int arr[n];
 	cout<<"enter the elements";
 	for(i=0;i<n;i++){
 		cout<<endl<<"element : "<<i+1<<" ";
 		cin>>arr[i];
 		
	 }
	  int c;
 	for(i=0;i<n-1;i++){
 		for(j=i+1;j<n;j++){
 			if(arr[i]==arr[j]){
			 
 			  cout<<"repeating element having index no are"<<i<<":"<<j<<endl;
 			  c=min(i,j);
 			  cout<<"smaller index no is "<<c;
 		
			 }		
 			
		 }
 	}
 	return 0;
 }
