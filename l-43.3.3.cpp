//Runtime polymorphism
//Method overriding hota hai isme dekh lena or function ka naam same hote hue bhi ambigious nhi 
//aaya kyuki inheritance ho rha hai
//agr override ni kiye toh pehle wala class ka hi function execute kr jaega
#include<iostream>
using namespace std;
class A{
	public:
		void speak(){
			cout<<"I will speak";
		}
};
class B:public A{
	public:
//		void speak(){
//			cout<<"I will bark";
//		}
};
int main(){
	 B obj;
	 obj.speak();
	
	return 0;
}
