//Length of the string
#include<iostream>
using namespace std;
int main(){
	int count=0;
	char ch[]="babbar";
	for(int i=0;ch[i]!='\0';i++){
		count++;
	}
	cout<<"The length of the char arr is"<<count;
	
	return 0;
}
