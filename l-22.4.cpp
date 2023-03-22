//Check Palindrome string(taking uppercase and lowercase)
//Either you can create lowercase function or u can
// use directly tolower present in algorithm package
#include<iostream>
#include<algorithm>
using namespace std;
//Lowercase function
char tolowercase(char ch){
	if(ch>='a' && ch<='z')
	return ch;
	else{
	char temp=ch-'A'+'a';
	return temp;
    }
}
//checking palindrome string
bool checkstring(char arr[],int n){
	for(int i=0;i<n/2;i++){
		if(tolowercase(arr[i])==tolowercase(arr[n-i-1]))
		return 1;
		else
		break;
	}
	return 0;
}
int main(){
char ch[]="Noon";
int flag=checkstring(ch,4);
if(flag==1)
cout<<"Palindrome string";
else
cout<<"Not a Palindrome string";
return 0;
}
