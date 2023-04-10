//Hybrid inheritance->It is combination of 2 or more inheritance 
//A->B->C->D

#include<iostream>
using namespace std;
class A{
	public:
		void func1(){
			cout<<"Inside function 1"<<endl;
		}
};
class D{
	public:
		void func4(){
		cout<<"Inside function 4"<<endl;
		}
};
class B:public A{
	public:
		void func2(){
			cout<<"Inside function 2"<<endl;
		}
};
class C:public A,public D{
	public:
		void func3(){
			cout<<"Inside function 3"<<endl;
		}
};

int main(){
	A obj;
	obj.func1();
	B obj1;
	obj1.func1();
	obj1.func2();
	C obj2;
	obj2.func1();
	obj2.func3();
	obj2.func4();
	return 0;
}
