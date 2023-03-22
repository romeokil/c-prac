#include<iostream>
using namespace std;

int main(){
	int n;
cout<<"enter the no of days ";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int max=a[0];
int c=0;
for(int i=0;i<n;i++)
{
if(a[i]>a[i+1] && a[i]>max){
c++;
max=a[i];
}	
}
cout<<"Record Breaking days"<<c;	
	return 0;
}
