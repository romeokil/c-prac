#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
    int n,c=0;
	int d=0;
    int x=0;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    cout<<"enter the no in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1)
          c++;
        else if(arr[i]==0)
          d++;
    }
    x=(c-d);
    
	int num=abs(x);
    
    
    cout<<"your answer is "<<num;
}
