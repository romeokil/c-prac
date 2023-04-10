//C++ Inheritance Ambiguity
//esme hota ye hai ki same naam ka func dono class me present rhta hai eske wajah se compiler ko smjh
//nhi aata hai ki kaun sa class ka function ko call kr rha hai es situation ko ambigious bolte hai

#include<iostream>
using namespace std;
class A{
	public:
		void abc(){
			cout<<"This is class A";
		}
};
class B{
	public:
		void abc(){
			cout<<"This is class B";
		}
};
class C:public A,public B{
	
	};
int main(){
	C obj;
	//obj.abc();Ambigious call
	obj.B::abc();
	return 0;
}
