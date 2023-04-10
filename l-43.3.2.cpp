//Polymorphism->many forms
//Operator overloading bolke ek chiz hota hai jisme hm kuch bhi operator ka kaam change kr skte hai
//jaise hm jb bracket de tb hello rahul print ho jae
#include<iostream>
using namespace std;
class A{
    public:
	void operator() (){
		cout<<"Hello beta tm toh heavy driver nikle";
	}
};
int main(){
	A obj;
	obj();
	return 0;
}
