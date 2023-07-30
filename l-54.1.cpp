//This is lecture no 54 introduction about stack which works on a lifo concept(last in first out)
//For learning more function you should go for documentation
#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;   //Creation of object
	s.push(1);      //Pushing the element in the stack
 	s.push(2);
	cout<<"The size of the stack is "<<s.size()<<endl;
    s.pop();        //Popping the element in the stack
    cout<<s.top()<<endl;   //Printing the top element of the stack
    if(s.empty())          //Checking the stack is empty or not
    cout<<"Stack is empty";
    else
    cout<<"Stack is not empty";
	return 0;
}
