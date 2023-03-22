#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter the value for making array";
cin>>n;
int i;

int arr[n];

for(i=0;i<n;i++){
	
	cin>>arr[i];
}

int key,flag;
cout<<"enter the searching num";
cin>>key;
for(i=0;i<n;i++){
	
	if(arr[i]==key){
	
	
	flag=1; 
	break;
	}
	else
	flag=0;
}
if(flag==1)
cout<<"got it";
else
cout<<"sorry not enterned";

return 0;
}
