#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <string> s;
	s.push("rahul");
	s.push("kumar");
	s.push("jha");
	cout<<"Before popping"<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<"After popping"<<endl;
	cout<<s.top()<<endl;
	cout<<"Size of the stack"<<endl;
	cout<<s.size()<<endl;
	cout<<"Stack empty or not"<<endl;
	cout<<s.empty()<<endl;
	
	return 0;
}

