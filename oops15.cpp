#include<iostream>
using namespace std;
class Number{
	int a;
	public:
		  Number(){
		  	a=0;
		  }
	      Number(int d){
	      	a=d;
		  }
		  Number(Number &obj){
		  	cout<<"Copy Constructor Called!!"<<endl;
	      	a=obj.a;
		  }
		  void print(){
		  	cout<<"The value of a is "<<a<<endl;
		  }
};
int main(){
   Number x,y,z(45);
   x.print();
   y.print();
   z.print(); 
   Number z1(x); 
   z1.print();
   Number z2(z);
   z2.print();
   Number z4=z;
   z4.print();
   return 0;
}
