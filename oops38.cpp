#include<iostream>
using namespace std;
template<class T>
void swapp(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
}
template<class x,class y>
      float funcavg(x a,y b){
      float avg=(a+b)/2.0;
      return avg;
 }
int main(){
    float b=funcavg(5,2);
	cout<<"The average of the given nos are "<<b<<endl ;
	int g=4,h=5;
	swapp(g,h);
	cout<<"The swapped no is "<<g<<" and "<<h;
	return 0;
}
