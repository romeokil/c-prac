#include<iostream>
using namespace std;
 
 int main(){
 	int n;
 	cout<<"enter the no of array you want";
 	cin>>n;
 	int arr[n];
 	cout<<"enter the no in array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
 	int key;
	cout<<"enter the no you want to find";
	cin>>key;
	for(int i=0;i<n;i++){
	
		if (arr[i]==key){
			
			cout<<"position no "<<i;
		}
	}
	
 	return 0;
 }
