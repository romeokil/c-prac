//Single level Inheritance
//Class A->Class B
#include<iostream>
using namespace std;
class Animal{
	public:
		int age;
		int weight;
		void speak(){
			cout<<"Speaking is must";
		}
};
class Dog:public Animal{
	
};
int main(){
	Dog d;
	d.speak();
	
	return 0;
}
