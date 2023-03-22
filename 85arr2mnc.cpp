#include<iostream>
using namespace std;
 
 int main(){
 	int n;
 	cout<<"enter the no of elements you want in array";
 	cin>>n;
 	int arr[n];
 	cout<<"enter the elements";
 	for(int i=0;i<n;i++){
 		cout<<endl<<"element "<<i+1<<": ";
 		cin>>arr[i];
	 }
	 int s;
	 cout<<"enter the value for sum";
	 cin>>s;
	 
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==s){
			
			cout<<"starting index "<<i<<endl;
			cout<<"ending   index "<<j;
		}
		}
		
    }  
 	return 0;
 }
