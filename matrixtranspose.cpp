#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"enter the value of row and column";
	cin>>r>>c;
	//intializing the array
	int arr[r][c];
	for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	    	cin>>arr[i][j];
	    	
		}
	}
	//making transpose 
	int temp;
	for(int i=0;i<r;i++){
		for(int j=i;j<c;j++)
		{
			{
		
			temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
			
	        }
	    
		}
	}
	//printing the transpose array 
	cout<<"output array"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
