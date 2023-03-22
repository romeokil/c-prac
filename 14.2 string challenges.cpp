#include<iostream>
using namespace std;

int ispower2(int n)
{
	
	return (n && !(n & n-1));
	
}
int main(){
	
	cout<<ispower2(15)<<endl;
	
	return 0;
}
