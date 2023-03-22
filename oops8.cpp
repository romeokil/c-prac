#include<iostream>
using namespace std;
class Y;
class X{
	int data;
	public:
		friend void add(X,Y);
		void setData(int value){
			data=value;
		}
		
};
class Y{
	int num;
	friend void add(X,Y);
	public:
		void setData(int value){
			num=value;
		}
};
void add(X o1,Y o2){
	cout<<"The sum of the given no is "<<o1.data+o2.num;
}
int main(){
    X a1;
    Y b1;
    a1.setData(3);
    b1.setData(4);
    add(a1,b1);
	
	return 0;
}
