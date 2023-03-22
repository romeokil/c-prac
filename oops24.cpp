#include<iostream>
using namespace std;
class Student{
	protected:
		int rollNo;
		public:
			void setNumber(int rn){
				rollNo=rn;
			}
			void getNumber(){
				cout<<"The roll No of the student is "<<rollNo;
			}
};
class Test:virtual public Student{
	protected:
		float maths,physics;
		public:
			void setMarks(float m1,float m2){
				maths=m1;
				physics=m2;
			}
			void getMarks(){
				cout<<"Marks in the respective subjects are:"<<endl
				<<"maths - "<<maths<<endl
				<<"physics - "<<physics<<endl;
			}
};
class Sports:virtual public Student{
	protected:
		int score;
		public:
			void setscore(int sc){
				score=sc;
			}
			
		    void getscore(){
				cout<<"Your Total score is "<<score<<endl;
			}
};
class Result:public Test,public Sports{
	private:
		float res;
		public:
			void display(){
				res=maths+physics+score;
				getNumber();
				getMarks();
				getscore();
				cout<<"Your total score is "<<res<<endl;
			}
};
int main(){
	Result r;
	r.setNumber(3000);
	r.setMarks(400,600);
	r.setscore(9);
//	r.getNumber();
//	r.getMarks();
//	r.getscore();
	r.display();
	return 0;
}
