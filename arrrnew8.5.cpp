#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the no of element";
	cin>>n;
	int a[n];
	cout<<"enter the elements\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c=0,m;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
				if(c==1){
					m=i;
				}
				else{
					if(m<i){
						cout<<m;
					}
				}
			}
		}
	}
	return 0;
	
}
