#include<iostream>
#include<math.h>
using namespace std;

int dectobin(int n){
	int sum=0,i=0;
	while(n>0){
		int rem=n%2;
		sum+=pow(10,i)*rem;
		n/=2;
		i++;
	}
	return sum;
}

int main(){
	int n;
	cout<<"enter the decimal no";
	cin>>n;
    cout<<"Conversion of decimal to binary is "<<dectobin(n); 
	return 0;
}
