#include<iostream>
using namespace std;
class complex;//Forward declaration
class Calculator{
	public:
	int add(int a,int b){
		return (a+b);
	}
	int sumrealcomplex(complex,complex);
	int sumcompcomplex(complex,complex);
};
class complex{
	int a,b;
	public:
		friend int Calculator::sumrealcomplex(complex o1,complex o2);
		friend int Calculator::sumcompcomplex(complex o1,complex o2);
		void setNumber(int v1,int v2){
			a=v1;
			b=v2;
		}
		void print(){
			cout<<"The complex no is"<<a<<"+"<<b<<"i"<<endl;
		}
};
int Calculator::sumrealcomplex(complex o1,complex o2){
		return (o1.a+o2.a);
	}
int Calculator::sumcompcomplex(complex o1,complex o2){
	return (o1.b+o2.b);
}
int main(){
	complex c1,c2;
	c1.setNumber(1,4);
	c1.print();
	c2.setNumber(2,3);
	c2.print();
	Calculator c;
	int res=c.sumrealcomplex(c1,c2);
	cout<<"The real part of the complex no is"<<res<<endl;
	int res1=c.sumcompcomplex(c1,c2);
	cout<<"The imaginary part of the complex no is"<<res1;
	
	return 0;
}
