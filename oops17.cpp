#include<iostream>
using namespace std;
    class Employee{
    	public:
    	int id;
    	float salary;
    		Employee(){}
    		Employee(int idp)
			{
    			id=idp;
    			salary=34;
    			cout<<"Id of the particular person is"<<id<<endl;
    			cout<<"Salary of the particular person is "<<salary<<endl;
			}
	};
	class program:public Employee{
		public:
		program(int inpid){
			id=inpid;
		}
		int LanguageCode=9;
		void getdata(){
			cout<<"Input Id of the program class is "<<id<<endl;
		}
	};
	int main(){
		Employee e1(3);
		Employee e2(9);
		program pr(1);
		cout<<"The id of the program class is"<<pr.id<<endl;
		cout<<"The language code of the program class is "<<pr.LanguageCode<<endl;
		pr.getdata();
		return 0;
	}
