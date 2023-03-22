#include<iostream>
using namespace std;
class Y;
class X{
	int data1;
	friend void swap(X &, Y &);
	public:
		void setData(int value){
			data1=value;
		}
		void display(){
			cout<<"The value of class X is"<<data1<<endl;
		}
};
class Y{
	int data2;
	friend void swap(X &, Y &);
	public:
		void setData(int value){
			data2=value;
		}
		void display(){
			cout<<"The value of class Y is"<<data2<<endl;
		}
};
void swap(X &o1,Y &o2){
	int temp=o1.data1;
	o1.data1=o2.data2;
	o2.data2=temp;
}
int main(){
	X a;
	Y b;
	a.setData(3);
	a.display();
	b.setData(4);
	b.display();
	swap(a,b);
	cout<<"After swapping nos are "<<endl;
	a.display();
	b.display();
	
	
	
	return 0;
}
