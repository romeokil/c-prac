#include<iostream>
using namespace std;
int main(){
	int m,n,p,q;
	cout<<"enter the rows and column in the first matrix\n";
	cin>>m>>n;
	cout<<"enter the rows and column in the second matrix\n";
	cin>>p>>q;
	int a[m][n],b[p][q];
	if(n!=p){
		cout<<"Matrix can't be multiplied\n";
		return 0;
	}
	//intake of elements in the first matrix 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	//intake of elements in the second matrix
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cin>>b[i][j];
		}
	}
	int c[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			c[i][j]=0;
			for(int k=0;k<p;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
