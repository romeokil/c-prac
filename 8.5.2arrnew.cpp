#include<iostream>
using namespace std;

int main(){
	int n,key;
	cout<<"enter the value of n";
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the key";
	cin>>key;
	for(int i=1;i<=n;i++){
		int sum=0;
	
	for(int j=i;j<=n;j++){
	sum=sum+a[j];	
	if(sum==key){
		cout<<i<<" "<<j<<endl;
	}
	
}
}
	
	return 0;
}
