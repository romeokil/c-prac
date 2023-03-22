#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the no of elements";
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mis=0;
		for(int j=0;j<n;j++){
			if(a[j+1]-a[j]==2 && a[j]>0 && a[j+1]>0){
			 mis=a[j]+1;
			 break;
			}
		}
	cout<<mis;

	return 0;
}
