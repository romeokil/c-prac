#include<iostream>
using namespace std;

int main(){
	int m,n,p;
	cout<<"enter the value of m,n & p";
	cin>>m>>n>>p;
	// putting the values in array
	cout<<"enter the values in matrix 1";
	int n1[m][n];
	int n2[n][p];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>n1[i][j];
		}
	}
	cout<<"enter the values in matrix 2";
	
	for(int j=0;j<n;j++){
		for(int k=0;k<p;k++){
			cin>>n2[j][k];
		}
	}
	int n3[m][p];
	for(int j=0;j<m;j++){
		for(int k=0;k<p;k++){
			n3[j][k]=0;
		}
	}
	
	//processing the array
	for(int i=0;i<m;i++){
		for(int k=0;k<p;k++){
			for(int j=0;j<n;j++){
				n3[i][k]+=n1[i][j]*n2[j][k];
			}
		}
	}
	//output the array
	for(int i=0;i<m;i++){
		for(int k=0;k<p;k++){
			cout<<n3[i][k]<<" ";		
	}
	cout<<endl;
   }
	return 0;
}
