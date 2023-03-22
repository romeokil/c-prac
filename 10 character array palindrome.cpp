#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char arr[n+1];
	cin>>arr;
	cout<<arr<<endl;
	bool check=1;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			check=0;
			break;
		}
	}
	if(check==true)
	cout<<"Palindrome word\n";
	else
	cout<<"Not a Palindrome word\n";
	return 0;
}
