#include<iostream>
using namespace std;

void check(int arr1[],int n,int arr2[],int n1){
   int i=0,j=0;
	while(i<n && j<n1){
			 if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<endl;
				i++;
				j++;
			}
			else if(arr1[i]<arr2[j])
				i++;
	        
			else
				j++;
	      }
		}
 int main(){
 int n,n1;
 cin>>n>>n1;
 int arr1[10],arr2[15];
 for(int i=0;i<n;i++){
 	cin>>arr1[i];
 }	
 for(int i=0;i<n1;i++){
 	cin>>arr2[i];
 }
 check(arr1,n,arr2,n1);
 
 	
 	return 0;
 }
 
