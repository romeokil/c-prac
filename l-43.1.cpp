//Encapsulation->Wrapping up the data members and functions
//we are declaring variable in private so that it will secured (can't accessed from the outside class)
//Advantage:
//1.Data Hiding(Security) 2.We can make class read only(no setter function)is allowed so that the data 
//cannot be changed 3.Code reusability 4.Unit Testing(Encapsulation)
#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int age;
		float level;
	public:
		void getage(){
			cout<<"Age "<<this->age<<endl;
		}
};
int main(){
	Student s;
	cout<<"Sb shi chal rha hai"<<endl;
	s.getage();
	
	
	return 0;
}
