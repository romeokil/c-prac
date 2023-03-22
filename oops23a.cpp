#include<iostream>
using namespace std;
class Base1{
	public:
		void greet(){
			cout<<"Hello Kutta!!"<<endl;
		}
};
class Base2{
	public:
		void greet(){
			cout<<"Ka haal baa ho bauwaaa!!"<<endl;
		}
};
class derived:public Base1,public Base2{
	int a;
};
int main(){
	Base1 b1;
	b1.greet();
	Base2 b2;
	b2.greet();
	derived der;
//	der.greet();
	return 0;
}
