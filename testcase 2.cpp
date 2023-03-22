#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the no of elements\n";
	cin>>n;
	int arr[n];
	//taking the elements
	cout<<"enter the element\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//for sorting
	for(i=0;i<n;i++){
		int postion=i;
     for(int j=i+1;j<n;j++){
     	if(arr[postion]>arr[j]){
     		postion=j;
		 }
		 if(postion!=i){
		 	int swap=arr[i];
		 	arr[i]=arr[position];
		 	arr[position]=swap;
		 }
	 }   
     }
	for()
	return 0;
}
