#include<iostream>
using namespace std;

int main(){
	int n,p=0,q=0,r=0,s=0,amt;
	cout<<"enter the amount first"<<endl;
	cin>>amt;
	
	while(amt!=0)
	{
		//int temp=0;
		p=amt/100;
		amt=amt%100;
		cout<<"DENOMINATION OF RUPEE NOTE IS "<<p<<endl;
		
	}
cout<<"DENOMINATION OF 100 RUPEE NOTE IS "<<p<<endl;
cout<<"DENOMINATION OF 50 RUPEE NOTE IS "<<q<<endl;
cout<<"DENOMINATION OF 20 RUPEE NOTE IS "<<r<<endl;
cout<<"DENOMINATION OF 1 RUPEE NOTE IS "<<s<<endl;
	return 0;
}
