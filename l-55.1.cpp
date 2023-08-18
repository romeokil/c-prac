//This lecture is 55.1 in which we are doing stack questions
//Reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
	string str="Rahul";
	stack<char>s;
	for(int i=0;i<str.length();i++){   //Pushing every character in the stack
		s.push(str[i]);
	}
//	while(!s.empty()){
//		cout<<s.top()<<endl;
//		s.pop();
//	}
    string ans="";
	while(!s.empty()){
		ans.push_back(s.top());
		s.pop();
	}
	cout<<"Reverse string is "<<ans;
//	
	
	return 0;
}
