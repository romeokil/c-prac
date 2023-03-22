#include<iostream>
using namespace std;

int main(){
	int n,a=1;
	float amt,dis;
	cout<<"enter the amount";
	cin>>amt;
	cout<<"enter the discount";
	cin>>dis;
	dis=dis/100;
	cout<<"enter the times you want to give discount";
	cin>>n;
	while(a<=n){
		amt=amt+(amt*dis);
		a++;
	}
	cout<<"your last amount is ";
	cout<<amt;
	return 0;
}
