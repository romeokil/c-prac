#include<iostream>
using namespace std;
template<class x=int ,class y=float,class z=char>
class Rahul{
	x a;
	y b;
	z c;
	public:
       Rahul(x p,y q,z r){
    	a=p;
    	b=q;
    	c=r;
	  }  
	  void display(){
		cout<<"The int value is "<<a<<endl;
		cout<<"The float value is "<<b<<endl;
		cout<<"The char value is "<<c<<endl;
	  }  
};
int main(){
	Rahul<> v1(1,2.3,'c');
	v1.display();
	Rahul<int,char,char> v2(3,'b','d');
	v2.display();
	return 0;
}
