#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"enter the element you want to search";
	cin>>key;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==key)
				cout<<"element found"<<" "<<i<<" "<<j<<endl;
		}
	}
    return 0;
}
