#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){/*
	string s="ncslvlkvlkcxnvn";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl;
	*/
	string s="553453246";
	
	/*for(int i=0;i<s.length()-1;i++){
		for(int j=i+1;j<=s.length();j++){
			if(s[i]<s[j]){
			int temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		    }
		}
	}
	*/
	sort(s.begin(),s.end(),greater<int>());
	cout<<s;
	return 0;
}
