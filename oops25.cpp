#include<iostream>
using namespace std;
class Base1{
	int data1;
	public:
		Base1(int i){
			data1=i;
			cout<<"Constructor of the Base1 class called"<<endl;
		}
		void printBase1data(){
			cout<<"The value of the Base1 class is "<<data1<<endl;
		}
};
class Base2{
	int data2;
	public:
		Base2(int i){
			data2=i;
			cout<<"Constructor of the Base2 class called"<<endl;
		}
		void printBase2data(){
			cout<<"The value of the Base2 class is "<<data2<<endl;
		}
		
};
class Derived:public Base1,public Base2{
	int derived1,derived2;
	public:
		Derived(int a,int b,int c,int d):Base1(a),Base2(b){
		derived1=c;
		derived2=d;
		cout<<"Construtor of the derived class is called!!"<<endl;
	    }
	    void printDerived(){
	    	cout<<"The value of the derived1 of the derived class is "<<derived1<<endl;
	    	cout<<"The value of the derived2 of the derived class is "<<derived2<<endl;
		}
};
int main(){
	Derived der(2,3,4,5);
	der.printBase1data();
	der.printBase2data();
	der.printDerived();
	
	
	return 0;
}

