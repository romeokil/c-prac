#include<iostream>
using namespace std;
template<class T>
class Harry{
	T data;
	public:
		Harry(T a){
		  data=a;
		}
		void display();
};
template<class T>
void Harry<T>::display(){
	cout<<"The data in the Harry class is "<<data<<endl;
}
void func(int a){
	cout<<"The data in the normal function is "<<a<<endl;
}
template<class T>
void func(T a){
	cout<<"I am templaized function";
}

int main(){
	Harry<float>h(3.6);
	h.display();
	func(4.2);
	return 0;
}
