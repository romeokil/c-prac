#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
	int a[]={0,1,0,3,12};
	cout<<"The array elements";
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	int j=0,i=0;
	while(j<1){
		if(a[j]==0){
		}
		else{
			i=j;
		 while(a[j-1]==0){
		 	j--;
		 }
		 swap(a[j],a[i]);
		 i=0;
		}
		j++;
	}
    cout<<endl;
	cout<<"The array elements";
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
