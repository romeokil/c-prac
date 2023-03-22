#include<iostream>
using namespace std;

int main(){
	int n,p=0,q=0,r=0,s=0;
	cout<<"enter the option acc to the amount";
	cout<<"1- If the amount is greater than 100 ";
	cout<<"2- If the amount  is greater than 50 ";
	cout<<"3- If the amount is greater than 20 ";
	cout<<"4- If the amount is greater than 1";
	cin>>n;
	while(n!=0){
	
	switch(n){

 		case 1: if(n>=100){
 			p=n/100;
 			n=n%100;
			break;
		 }
		case 2: if(n>=50 && n<100){
 			q=n/50;
 			n=n%50;
			break;
		 }
		case 3: if(n>=20 && n<50){
 			r=n/20;
 			n=n%20;
			break;
		 }
		case 4: if(n>=1 && n<20){
 			s=n/1;
 			n=n%1;
			break;
	}	
	}
	
}
cout<<"DENOMINATION OF 100 RUPEE NOTE IS "<<p<<endl;
cout<<"DENOMINATION OF 50 RUPEE NOTE IS "<<q<<endl;
cout<<"DENOMINATION OF 20 RUPEE NOTE IS "<<r<<endl;
cout<<"DENOMINATION OF 1 RUPEE NOTE IS "<<s<<endl;
	return 0;
}
