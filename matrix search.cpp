#include<iostream>
using namespace std;

int main(){
	
	int arr[4][4];
	//putting no in matrix
	cout<<"enter the element in matrix";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}	
	int key;
	cout<<"enter the no you want to find in matrix";
	cin>>key;
	//searching no 
	int c=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]==key){
			
			c++;
			cout<<"position of i is "<<i<<endl;
			cout<<"position of j is "<<j<<endl;
			}
			
			}
	}
	if(c=1)
	cout<<"element found";
	else
	cout<<"element not found";
	
	return 0;
}
