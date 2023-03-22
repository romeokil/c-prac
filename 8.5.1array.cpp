#include<iostream>
using namespace std;

int main(){
	int n;
	int c=0,m=0;
	cout<<"enter the no of element\n";
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
				cout<<c<<endl;
			}
			if(c=1){
				 m=i;
			}
			if(c=3){
				if(m<i){
					
				}
			}
			}
		}
	return 0;
}
