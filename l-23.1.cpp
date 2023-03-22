//Linear Search in a array
#include<iostream>
#include<algorithm>
using namespace std;

bool linearSearch(int arr[][4],int key){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(arr[i][j]==key){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
int key;
  int arr[3][4];
  for(int i=0;i<3;i++){
  	for(int j=0;j<4;j++){
  		cin>>arr[i][j];
	  }
  }
  cout<<"enter the element you want to find";
  cin>>key;
  int flag=linearSearch(arr,key);
  if(flag==1)
  cout<<"element found";
  else
  cout<<"Element not found";	
	return 0;
}
