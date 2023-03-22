#include<iostream>
using namespace std;
int Octaltobinary(int n){
	int x=1,ans=0;
	while(n>0){
		int y=n%10;
		ans=ans+x*y;
		x=x*8;
		n=n/10;
		
	}
	return ans;
}
int main(){
	int n1;
	cout<<"enter the no you want to convert octal to decimal";
	cin>>n1;
	cout<<Octaltobinary(n1);
	
	
	
	return 0;
}
