#include<iostream>
using namespace std;
class Student{
	int rollno;
	public:
		int setrollno(int);
		void getrollno(void);
};
int Student::setrollno(int r){
	rollno=r;
}
void Student::getrollno(){
	cout<<"The roll no of the particular student is "<<rollno<<endl;
}
class Marks:public Student{
	protected:
	int physics;
	int maths;
	public:
		int setmarks(float,float);
		void getmarks(void);
};
int Marks::setmarks(float m,float p){
	maths=m;
	physics=p;
}
void Marks::getmarks(){
	cout<<"Marks of the particular student in maths is "<<maths<<endl;
	cout<<"Marks of the particular student in physics is "<<physics<<endl;
}
class Result:public Marks{
	float percentage;
	public:
		void display(){
			getrollno();
			getmarks();
			cout<<"The percentage of the particular student is "<<(maths+physics)/2<<"%"<<endl;
		}
};
int main(){
	Result res;
	res.setrollno(5);
	res.setmarks(92,96);
	res.display();
	
	return 0;
}
