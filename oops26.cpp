#include<iostream>
using namespace std;
class Test{
	int a;
	int b;
	public:
	Test(int i,int j):b(j),a(i+b){
		cout<<"Constructor Called!!"<<endl;
		cout<<"The value of a is "<<a<<endl;
		cout<<"The value of b is "<<b<<endl;
	}
};
int main(){
	Test t(2,3);
	
	
	return 0;
}
