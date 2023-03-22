#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter the rows and column of the matrix";
	cin>>m>>n;
	int a[m][n];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
		for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
		     if(j<=i){
		     	int temp=a[i][j];
		     	a[i][j]=a[j][i];
		     	a[j][i]=temp;
			 }
		}
	}
		for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}


	
	
	return 0;
}
