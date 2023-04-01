//Recursive function for finding the power of 2 
#include<iostream>
using namespace std;
int pow(int n){
	if(n==0){
		return 1;
	}
	return 2*pow(n-1);
	
}

int main(){
	int n;
	cout<<"Enter the no for which you want to get power of 2 ";
	cin>>n;
	cout<<"Power of the given no is "<<pow(n);
	
	return 0;
}
