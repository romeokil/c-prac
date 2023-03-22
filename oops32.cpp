#include<iostream>
using namespace std;
class Base{
	public:
		int basedata=1;
		virtual void display(){
			cout<<"The data in the base class is "<<basedata;
		}
};
class Derived:public Base{
	public:
		int deriveddata=2;
		void display(){
			cout<<"The data in the base class is "<<basedata<<endl;
			cout<<"The data in the derived class is "<<deriveddata<<endl;
		}
};
int main(){
    Base Baseobj;
    Derived Derivedobj;
    Base *Baseclasspointer;
//    Baseclasspointer=&Baseobj;
    Baseclasspointer=&Derivedobj;;
    Baseclasspointer->display();
    //Derived *Derivedclasspointer;
  //  Derivedclasspointer=&Derivedobj;
    //Derivedclasspointer->display();
	
	return 0;
}
