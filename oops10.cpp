#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		complex();
		void printData(){
			cout<<"The complex no is in the form"<<a<<"+"<<b<<"i"<<endl;
	    }
};
complex::complex(){
   a=10;
   b=20;
}
int main(){
	complex c1,c2;
	c1.printData();
	c2.printData();
	
	return 0;
}
	
