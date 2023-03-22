#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	while(b!=0){
	
	int rem=a%b;
	a=b;
	b=rem;
}
return a;
	}
	
	int main(){
		int a,b;
		cout<<"enter the value of a & b";
		cin>>a>>b;
		
		cout<<gcd(24,18);
	return 0;	
	}

