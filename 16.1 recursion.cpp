#include<iostream>
using namespace std;

int sum(int n){
	
	if(n==0)
	{
		
		return 0;
	}
	
	int presum=sum(n-1);
	int sum1=n+presum;

	
return sum1;
}

int main(){
	int n;
	cout<<"enter the value of n";
	cin>>n;
	cout<<sum(n)<<endl;
	
	return 0;
}
