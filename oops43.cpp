#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={2,7,5,9,3};
	sort(arr,arr+6,greater<int>());
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
