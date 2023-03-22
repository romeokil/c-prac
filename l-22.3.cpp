//Check Palindrome string(ignoring uppercase and lowercase)
#include<iostream>
#include<algorithm>
using namespace std;
bool checkpalindromestring(char arr[],int n){
	for(int i=0;i<n/2;i++){
		if(arr[i]==arr[n-i-1]){
			return 1;
		}
		else{
			break;
		}
	}
	return 0;
	
}
int main(){
    char ch[]="race a car";
	int k=10;
	int check=checkpalindromestring(ch,k);
	if(check==1)
		cout<<"Palindrome String";
	else
	cout<<"Not a Palindrome String";
	
	return 0;
}
