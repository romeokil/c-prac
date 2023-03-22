#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"enter the no of column and row";
	cin>>n>>m;
	int arr[n][m];
	cout<<"enter the elements in array";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
    } 
	
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		if (i!=j && arr[i][j]=arr[j][i])
    		arr[i][j]=arr[j][i];
		}
    	
	}
	cout<<"the transpose be like "<<endl;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
