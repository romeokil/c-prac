//Factorial using recursion.
#include<iostream>
using namespace std;
double fac(double n){
	if(n==0)
	return 1;
	return n*fac(n-1);
}
int main(){
	double n;
	cout<<"enter the no you want factorial";
	cin>>n;
	cout<<"Factorial of a given no is "<<fac(n);
	return 0;
}
