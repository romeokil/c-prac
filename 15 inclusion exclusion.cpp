#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the value of n ";
  cin>>n;
  int arr[n],c=0,d=0,e=0;
  //taking input 
   for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
	//processing that which no is divisible by 7
	for(int i=0;i<n;i++ ){
		if(arr[i]%7==0){
			c++;
		}
	
	}
	cout<<c;
    //processing that which no is divisible by 5;
	for(int i=0;i<n;i++){
		if(arr[i]%5==0){
			d++;
			}
	
		}
		cout<<d;
	//processing that which no is divisible by both 5 & 7
	for(int i=0;i<n;i++){
		if(arr[i]%(5 * 7)==0){
			e++;
		}
    }
    	cout<<e;
	int x;
	x=c+d-e;
	cout<<"the no of net element is "<<x<<endl;	
	return 0;
	
}
