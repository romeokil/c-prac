//Linear Search in a array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[3][4];
  for(int i=0;i<3;i++){
  	for(int j=0;j<4;j++){
  		cin>>arr[i][j];
	  }
  }
  for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			sum+=arr[i][j];
			}
			cout<<"SUM OF "<<i+1<<"ROW IS "<<sum<<endl;
		}	
	return 0;
}
