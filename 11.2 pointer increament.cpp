#include<iostream>
using namespace std;
void increament(int *a){
	++*a;
	
}
int main(){
	int a=10;
	cout<<a<<endl;
	increament(&a);
	cout<<a;
	
	return 0;
}
