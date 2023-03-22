#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"enter the no of rows and columns";
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int rowstart=0,rowend=n-1,colstart=0,colend=m-1;
    while(rowstart<=rowend && colstart<=colend){
    	//for row start
    	for(int col=colstart;col<=colend;col++){
    		cout<<arr[rowstart][col]<<" ";
    		
    	}
    	rowstart++;
    	//for col end
    	for(int row=rowstart;row<=rowend;row++){
    		cout<<arr[row][colend]<<" ";
    		
		}
		colend--;
		//for row end
		for(int col=colend;col>=colstart;col--){
			cout<<arr[rowend][col]<<" ";
			
		}
		rowend--;
		//for col start
		for(int row=rowend;row>=rowstart;row--){
			cout<<arr[row][colstart]<<" ";
			
		}
		colstart++;
	}
	return 0;
}
