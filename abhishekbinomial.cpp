#include<iostream>
using namespace std;

	int fact(int n){
		int fac=1;
		for(int i=n;i>1;i--){
			fac=fac*i;
		}
            return fac;
	}
	
	
	int main(){
		int ans,fac0=1,m,r,row;
		cout<<"enter the value of rows";
		cin>>row;
	for(int m=0;m<row;m++){
		for(int n=0;n<=row-1-m;n++){
				cout<<" ";
			}
		for(int r=0;r<=m;r++){
		
			 ans={fact(m)/(fact(m-r)*fact(r))};
	         cout<<ans<<" ";
	    }
	        cout<<endl;
	       
	     }
	
	return 0;
	
}
