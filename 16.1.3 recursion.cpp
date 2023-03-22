#include<iostream>
using namespace std;

int fac(int n)
{
	if(n==0){
		
		return 1;
	}
    int prefac=fac(n-1);
    return n*prefac;
	
}

int main(){
	int n;
	cout<<"enter the value of n for which you want factorial";
	cin>>n;
	cout<<fac(n)<<endl;
	
	return 0;
}
