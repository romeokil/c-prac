#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"enter the order for matrix";
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cin>>arr[i][j];	
		}
		
	}
	int tar;
	cout<<"enter the target";
	cin>>tar;
	int r=0;
	int c=m-1;
	bool d=0;
	while(r<n && c>=0){
		if(arr[r][c]==tar){
		d=1;
		break;
	}
		else if(arr[r][c]>tar){
		c=c-1;
	}
		else{
		r=r+1;
	}
	cout<<" h";
	}
	if(d==1){
	
	cout<<"element found";
}
	else{
	cout<<"element not found";
	}
	return 0;
}
