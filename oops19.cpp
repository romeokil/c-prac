#include<iostream>
using namespace std;
class base{
	protected:
		int a;
	private:
		int b;
};
class derived:protected base{
	
	
};
int main(){
	base b;
	derived d;
	d.a;//inaccessible because visibility is protected and we are trying
	// to access the protected members.
	//also inaccessible if it is public members because visibility 
	//is protected hence we can't access the protected members.
	
}
