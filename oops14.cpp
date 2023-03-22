#include<iostream>
using namespace std;
class BankDeposit{
	int principal;
	int years;
	float rate;
	float returnvalue;
	public:
		BankDeposit(){}
		BankDeposit(int p,int y,float r);
		BankDeposit(int p,int y,int r);
	    void show();
};
BankDeposit::BankDeposit(int p,int y,float r){
	principal=p;
	years=y;
	rate=r;
	returnvalue=principal;
	for(int i=0;i<y;i++){
		returnvalue=returnvalue*(1+rate);
	}
}
BankDeposit::BankDeposit(int p,int y,int r){
	principal=p;
	years=y;
	rate=float(r)/100;
	for(int i=0;i<y;i++){
		returnvalue=returnvalue*(1+rate);
	}
}
void BankDeposit::show(){
	cout<<"The principal amount is"<<principal<<"and the return value after "<<years
	<<"years is"<<returnvalue;
		
}
int main(){
	BankDeposit b1,b2;
	int p,R,y;
	float r;
	cout<<endl<<"enter the principal amount"<<endl;
	cin>>p;
	cout<<endl<<"enter the rate of interest (float value)"<<endl;
	cin>>r;
	cout<<"enter the time duration"<<endl;
	cin>>y;
	b1=BankDeposit(p,y,r);
	b1.show();
	cout<<endl<<"enter the principal amount"<<endl;
	cin>>p;
	cout<<endl<<"enter the rate of interest (int value)"<<endl;
	cin>>R;
	cout<<endl<<"enter the time duration"<<endl;
	cin>>y;
	b2=BankDeposit(p,y,R);
	b2.show();
    return 0;
}
