#include<iostream>
using namespace std;

int main(){
	int n,p=0,q=0,r=0,s=0,amt;
	cout<<"enter the amount first"<<endl;
	cin>>amt;
	cout<<"enter the option acc to the amount"<<endl;
	cout<<"1- If the amount is greater than 100 "<<endl;
	cout<<"2- If the amount is greater than 50 "<<endl;
	cout<<"3- If the amount is greater than 20 "<<endl;
	cout<<"4- If the amount is greater than 1"<<endl;
	cin>>n;
	while(amt!=0){
	
	switch(n){

 		case 1: if(amt>=100){
 			p=amt/100;
 			amt=amt%100;
			break;
		 }
		case 2: if(amt>=50 && amt<100){
 			q=amt/50;
 			amt=amt%50;
			break;
		 }
		case 3: if(amt>=20 && amt<50){
 			r=amt/20;
 			amt=amt%20;
			break;
		 }
		case 4: if(amt>=1 && amt<20){
 			s=amt/1;
 			amt=amt%1;
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
