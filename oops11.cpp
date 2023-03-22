#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		complex(int a,int b);
		void print(){
			cout<<"The complex no is in the form of"<<a<<"+"<<b<<"i"<<endl;
		}
};
complex::complex(int x,int y){
	a=x;
	b=y;
}
int main(){
	//implicit way
	complex a(3,4);
	a.print();
	//explicit formula
	complex b=complex(5,6);
	b.print();
	
	return 0;
}
