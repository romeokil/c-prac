#include<iostream>
using namespace std;

int main(){
	string s="ncBOaNcVYaTvbEvv";
	cout<<'a'-'A';
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]>='a' && s[i]<='z')
	 	      s[i]=s[i]-32;	
		  else
	 	      s[i]=s[i]+32;     
	}
	cout<<s;
	
	
	return 0;
}
