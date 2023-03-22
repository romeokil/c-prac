#include<iostream>
using namespace std;
class Base1{
	public:
		void greet(){
			cout<<"Hello ji kaise ho"<<endl;
		}
};
class Base2{
	public:
		void greet(){
			cout<<"Hanji hm ekdm perfect"<<endl;
		}
};
class derived:public Base1,public Base2{
	public:
		void greet(){
			Base1::greet();
		}
};
int main(){
Base1 b;
b.greet();
Base2 b1;
b1.greet();
derived der;
der.greet();	
}
