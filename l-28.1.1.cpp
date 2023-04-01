#include<iostream>
using namespace std;
int & update2(int a){//Bad Practice(because jo or variables hai uska range toh esi function 
	int num=a;       //tk rhega na toh tm kisko return karwaoge
	int &ans=num;                    	                              
	return ans;      //memory access hi ni kr pao
}                    //maanlo kisi or ne change kr diya
void update(int n){ //Pass by value
	n++;
}
void update1(int &n){//Pass by reference
	n++;
}
int main(){
	int n=10;
	cout<<"Before "<<n<<endl;
	update2(n);
	cout<<"After "<<n<<endl;
	
	
	return 0;
}
