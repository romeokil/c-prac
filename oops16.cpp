#include<iostream>
using namespace std;
int count=0;
class num{
	public:
		num(){
		count++;
		cout<<"This is the time whene constructor called for object "<<count<<endl;
	    }
	   ~num(){//Destructors does not take any values and does not return the same
	   	cout<<"This is the time when destructor called for object "<<count<<endl;
	   	count--;
	   }
};
int main(){
	cout<<"you have entered into the main function"<<endl;
	cout<<"Creating the first object n1"<<endl;
	num n1;
	{   cout<<"entering into the scopes of n1 having the local objects n2,n3"<<endl;
		cout<<"Creating the object n2 and n3"<<endl;
		num n2,n3;
		cout<<"exiting from the scopes"<<endl;
	}
	cout<<"Back to main functions"<<endl;
	return 0;
}
