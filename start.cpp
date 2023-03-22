#include<iostream>
#include<math.h>
using namespace std;
int bintodec(int n){
	int rem,i=0,sum=0;
	while(n>0){
		rem=n%10;
		sum+=pow(2,i)*rem;
		n/=10;
		i++;
	}
	return sum;
}
int main(){
	int n;
	cout<<"enter the binary no";
	cin>>n;
	cout<<"Conversion of binary no to decimal is "<<bintodec(n);
	
	return 0;
}
