//Polymorphism->many forms
//Compile time polymorphism
//method overloading and constructor overlaoding 
//This is the example of method overloading
#include<iostream>
using namespace std;
class A{
	public:
	int add(int a,int b){
		int sum=a+b;
		return sum;
	}
	int add(int a,int b,int c){
		int sum=a+b+c;
		return sum;
	}
	float add(float a,float b){
		float sum=a+b;
		return sum;
	}
	
};

int main(){
	A obj;
	cout<<obj.add(2,3)<<endl;
	cout<<obj.add(3,4,5)<<endl;
	cout<<obj.add(2.2f,7.8f)<<endl;
	return 0;
}
