#include<iostream>
using namespace std;
class Base1{
	protected:
	int base1data;
	public:
	void setdata1(int id){
		base1data=id;
	}
};
class Base2{
	protected:l
	int base2data;
	public:
	void setdata2(int ind){
	    base2data=ind;
	}
};
class Derived:public Base1,public Base2{
	public:
		void display(){
			cout<<"The data 1 of the base class is "<<base1data<<endl;
			cout<<"The data 2 of the base class is "<<base2data<<endl;
			cout<<"The data 3 of the derived class is "<<base1data+base2data<<endl;
		}
};
int main(){
	Derived der;
	der.setdata1(3);
	der.setdata2(4);
	der.display();
	
	return 0;
}
