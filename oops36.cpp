#include<iostream>
using namespace std;
template<class x,class y>
class setdata{
	x data1;
	y data2;
	public:
		setdata(x a,y b){
			data1=a;
			data2=b;
		}
	     void display(){
	     	cout<<"Float data is "<<data1<<endl;
	     	cout<<"Char data is "<<data2<<endl;
		 }
};
int main(){
	setdata<float,char> s1(2.6,'c');
	s1.display();
	return 0;
}
