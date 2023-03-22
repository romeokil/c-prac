#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
void reverse(int a[]){
	int s=0,e=a.size();
	while(s<=e){
		swap(a[s],a[e-1]);
		s++;
		e--;
	}
}
int main(){
	int arr[]={2,3,4,5,6};
	cout<<"Before swapping"<<endl;
	for(int i=0;i<arr.size(),i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	reverse(arr);
	cout<<"after reversing"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" "
	}
	cout<<endl;
	return 0;
}
