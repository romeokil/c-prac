#include<iostream>
using namespace std;
class Complex{
	int real;
	int imaginary;
	public:
		void setdata(int a,int b){
			real=a;
			imaginary=b;
		}
		void getdata(){
			cout<<"The real part of the no is "<<real<<endl;
			cout<<"The imaginary part of the no is "<<imaginary<<endl;
		}
};
int main(){
	Complex *ptr=new Complex;
	ptr->setdata(1,4);
	ptr->getdata();
	
	return 0;
}
