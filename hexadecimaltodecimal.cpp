#include<bits/stdc++.h>
using namespace std;
int hexadecimaltodecimal(string n){
	int ans=0,x=1;
	int s=n.size();
	for(int i=s-1;i>=0;i--)
	{
      if(n[i]>='0' && n[i]<='9'){
      	ans= ans+x*(n[i]-'0');
	  }
	  else if(n[i]>='A'&& n[i]<='F'){
	  	ans=ans+x*(n[i]-'A'+10);
	  }
	  x=x*16;
	}
	return ans;
}
	int main(){
		string n1;
		cout<<"enter the no you want to convert from hexadecimal to decimal";
		cin>>n1;
		cout<<hexadecimaltodecimal(n1);
		return 0;	
	}
	
	

