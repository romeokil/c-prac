#include<iostream>
using namespace std;

int main(){
	int arr[]={10,20,30,40};
	cout<<arr<<endl;
	//int *p=arr;
	//for(int i=0;i<4;i++){
	//cout<<*p<<" "; 
	//p++;
    //}  
    /*
	for(int i=0;i<4;i++){
		cout<<*(arr+i);
	}
	*/
	int a=10;
	int *p=&a;
    int **q=&p;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
	return 0;
}
