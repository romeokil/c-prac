#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	//string s1;
	//cout<<"enter the string\n";
	//getline(cin,s1);
	//cout<<s1;
/*	string s1="fam",s2="ily";
	s1.append(s2);
	cout<<s1<<endl;
	cout<<s1[1]<<endl;
*/
/*
string s1="hello";
string s2="apple";
int x;
x=s2.compare(s1);
cout<<x;
*/
string s1="nincompoop";
/*if(!s1.empty()){
	cout<<"String is not empty";
}*/
/*
s1.erase(3,3);
cout<<s1;
*/
/// NOTE: ISME INSERT,DELETE,FIND,CLEAR HO JA RHA H OR BS USKA SYNTAX DEKH LENA.
//s1.insert(2,"lol");
cout<<s1.length()<<endl;
cout<<s1<<endl;
//Printing every character of the string
for(int i=0;i<s1.length();i++){
	cout<<s1[i]<<" ";
}
cout<<endl;
string z=s1.substr(6,4);
cout<<z;
//string s2="786";
//int x = stoi(s2);
//cout<<x+2<<endl;
//int y=786;
//cout<<to_string(y)+"2";
//	return 0;
string s="rahkjfhcoaw";
sort(s.begin(),s1.end());
cout<<s<<endl;
}

