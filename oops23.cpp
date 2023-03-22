#include<iostream>
using namespace std;
class B{
	public:
		void say(){
			cout<<"Kaise ho be Ekdm Bhaukal me na"<<endl;
		}
};
class D:public B{
	public:
		void say(){
			cout<<"Cut off nhi rank chahiye"<<endl;
		}
};
int main(){
//	B b;
	D d;
//	b.say();
	d.say();	
	
	
}
