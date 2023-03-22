#include<iostream>
using namespace std;
class Base{
	public:
	int basedata;
		void display(){
			cout<<"The basedata of the base class is "<<basedata<<endl;
		}
};
class Derived:public Base{
	public:
	int deriveddata;
		void display(){
			cout<<"The basedata of the base class is "<<basedata<<endl;
			cout<<"The deriveddata of the derived class is "<<deriveddata<<endl;
		}
};
int main(){
	Base Baseobj;
	Derived Derivedobj;
	Base *Baseclasspointer;
//	Baseclasspointer=&Baseobj;
	Baseclasspointer=&Derivedobj;
	Baseclasspointer->basedata=94;
	Baseclasspointer->display();
	Derived *Derivedclasspointer;
	Derivedclasspointer=&Derivedobj;
	Derivedclasspointer->deriveddata=39;
	Derivedclasspointer->display();
}
