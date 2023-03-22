#include<iostream>
using namespace std;

int main(){
	int m,n;
	cout<<"enter the rows and column of a matrix";
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int key;
	cout<<"enter the element you want to find out ";
	cin>>key;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==key){
				cout<<"element found"<<endl;
				cout<<"Position is "<<i<<" "<<j;
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
