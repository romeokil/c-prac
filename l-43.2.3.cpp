//Multilevel inheritance 
//A->B->C
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
class German:public Dog{

};
int main(){
    German d;
	d.speak();
	
	return 0;
}
