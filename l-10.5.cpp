#include<iostream>
using namespace std;

void sort(int arr[],int n){
int i=0,j=n-1;
while(i<j)
{
	while(arr[i]==0 && i<j)   
	 i++;
	while(arr[j]==1 && i<j) 
		j--;
    if((arr[i]==1 && arr[j]==0) && i<j){
		int temp=arr[i];
		arr[i]==arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n,arr[20];
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	sort(arr,n);
	return 0;
}
