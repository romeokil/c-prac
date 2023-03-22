#include<iostream>
using namespace std;
int Binarytodecimal(int n){
	int x=1,ans=0;
	while(n>0){

	int y=n%10;
	ans=ans+x*y;
	x=x*2;
	n=n/10;
    }
	return ans;
}
int main()
{
	int n1;
cout<<"enter the no you want to convert from binary to decimal";
cin>>n1;
cout<<Binarytodecimal(n1);
return 0;	
}
