#include<iostream>
using namespace std;
int main(){
	int arr[]={0,1,0,3,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0,j=i+1;
        while(i<n && j<n){
           if(arr[j]==0){
               j++;
           }
           else if(arr[j]!=0){
               int k=j;
               while(j<i){
                   j--;
               }
               swap(arr[j],arr[k]);
               i++;
           }
       }
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
