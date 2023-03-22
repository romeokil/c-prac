#include<iostream>
#include<string>

using namespace std;

int main()
{
// string str;
// cin>>str;
// getline(cin,str);
// cout<<str<<endl;
//string s1="fam";
//string s2="ily";
//s1.append(s2);
//cout<<s1+s2<<endl;
//s1=s1+s2;
//cout<<s1[5];
string s1="786";
string s2="abc";
cout<<s2.compare(s1)<<endl;
if(s2.compare(s1)==0)
cout<<"given strings are equal"<<endl;
cout<<s1<<endl;
s1.erase(3,3);
s1.insert(3,"lol");
cout<<s1<<endl;
cout<<s1.find("poop")<<endl;
for(int i=0;i<s1.length();i++)
	cout<<s1[i]<<endl;
string s=s1.substr(6,4);
cout<<s;
int x = stoi(s1);
cout<<x<<endl;
//int x=786;

//cout<< to_string(x)+"2"<<endl;	
	return 0;
}
