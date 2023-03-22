#include<iostream>
using namespace std;
class employee{
	int id;
	static int count;	
	public:
		
		void setdata(){
			cout<<"enter the id of the employee";
			cin>>id;
			count++;
		}
		void getdata(){
			cout<<"The id of the employee no "<<count<<" is "<<id<<endl;
		}
		static void getCount(){
			cout<<"The value of the count is"<<count<<endl;
		}
};

int employee::count;//Default value is 0
int main(){
	employee emp,abhi,preet;
//	emp.id=1001;
//	emp.count=3;
    emp.setdata();
    emp.getdata();
    employee::getCount();
    
    abhi.setdata();
    abhi.getdata();
    employee::getCount();
    
    preet.setdata();
    preet.getdata();
    employee::getCount();
}
