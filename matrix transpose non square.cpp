#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"enter the value for row and column ";
	cin>>r>>c;
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
			
		}
	}	

	int tarr[c][r];
	/*
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			tarr[i][j]=0;
		}
	}
	*/
	
	// int temp;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			// temp=tarr[j][i];
			tarr[j][i]=arr[i][j];
			// arr[i][j]=temp;
		}
	}
	cout<<"your output array is"<<endl;
	for(int i=0;i<c;i++){
         for(int j=0;j<r;j++){
         	cout<<tarr[i][j]<<" ";
		 }
		 cout<<endl;
	}
	return 0;
}
