//Reverse a string
#include<iostream>
#include<algorithm>
using namespace std;
void reversestring(char arr[],int n){
	for(int i=0;i<n/2;i++){
		swap(arr[i],arr[n-i-1]);
	}
}
int main(){
     char ch[]="babbar";
     reversestring(ch,6);
     cout<<ch;
	
	return 0;
}
