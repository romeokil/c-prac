#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the no of entries";
	cin>>n;
	int arr[n];
	cout<<"enter the visitors on the particular day ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx=0;
	for(int i=0;i<n;i++){
		mx=max(mx,arr[i]);
        c=i;
	}
	cout<<mx<<c;
	return 0;
}
