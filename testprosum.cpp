#include<iostream>
using namespace std;
int main(){
	int n,sum=0,pro=1;
	cout<<"enter the no";	
	cin>>n;
	while(n>0){
		int rem=n%10;
		sum+=rem;
		pro*=rem;
		n/=10;
	}
	cout<<"Diffrence of product and sum "<<pro-sum;
	return 0;
}
