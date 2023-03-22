#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setNumber(int v1,int v2){
			a=v1;
			b=v2;
		}
//		friend complex setcomplex(complex o1,complex o2);
		void print(){
			cout<<"The complex no is "<<a<<"+"<<b<<"i"<<endl;
		}
};

complex setcomplex(complex o1,complex o2){
	complex o3;
	o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main(){
	complex c1,c2,sum;
	c1.setNumber(1,2);
	c1.print();
	c2.setNumber(2,3);
	c2.print();
	sum=setcomplex(c1,c2);
	sum.print();
}
