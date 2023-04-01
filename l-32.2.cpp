//Fibonacci Series Using recursion
#include<iostream>
using namespace std;
int fib(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	return fib(n-2)+fib(n-1);
}
int main(){
	int n;
	cout<<"Enter the no upto which you want fibonacci";
	cin>>n;
	cout<<"Answer for "<<n<<" is "<<fib(n);
	return 0;
}
