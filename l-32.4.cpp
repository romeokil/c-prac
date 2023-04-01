//say digits
#include<iostream>
using namespace std;
void check(int n){
	if(n==0){
		return ;
	}
	int rem=n%10;
	switch(rem){
		case 1:cout<<"One ";
		        break;
		case 2:cout<<"Two ";
		        break;
		case 3:cout<<"Three ";
		        break;
		case 4:cout<<"Four ";
		        break;
		case 5:cout<<"Five ";
		        break;
		case 6:cout<<"Six ";
		        break;
		case 7:cout<<"Seven ";
		       break;
		case 8:cout<<"Eight ";
		        break;
		case 9:cout<<"Nine ";
		       break;
	    case 0:cout<<"Zero ";
		        break;
	}
	n/=10;
	check(n);
}
int main(){
	int n;
	cout<<"enter the no";
	cin>>n;
	check(n);
}
