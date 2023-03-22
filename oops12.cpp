#include<iostream>
#include<math.h>
using namespace std;
class point{
	int x,y;
	public:
		friend int distance(point o1,point o2);
	      point(int a,int b);
		void print(){
			cout<<"Point can be represented in the form of "<<"("<<x<<","<<y<<")"<<endl;
		}
};
point::point(int a,int b){
	x=a;
	y=b;
}
int distance(point o1,point o2){
	return sqrt(pow((o2.x-o1.x),2)-pow((o2.y-o1.y),2));
}
int main(){
	point p(2,4);
	p.print();
	point q(4,5);
	q.print();
int x=distance(p,q);
cout<<"The distance between two point is "<<x<<endl;
	return 0;
}


