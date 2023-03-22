#include<iostream>
using namespace std;
int main(){
	int a=4;//static memory allocation
	int *ptr=&a;
	cout<<"The value of the ptr is "<<*(ptr)<<endl;
	int *p=new int(40);
	cout<<"The value of the p is "<<*(p)<<endl;
	int *arr=new int[3];
	for(int i=0;i<3;i++){
		arr[i]=i;
	}
	for(int i=0;i<3;i++){
		cout<<"The value at index position "<<i<<" "<<arr[i]<<endl;
	}
	return 0;
}
