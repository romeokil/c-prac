//Reverse the array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	int arr[]={11,7,3,12,4};
	int n=sizeof(arr)/sizeof(arr[0]);
//	int q=end(arr)-begin(arr);
//	cout<<"The length of the array is "<<n<<endl;
//	cout<<"before reversing"<<" ";
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	reverse(arr,arr+n);
//	cout<<"After reversing"<<" ";
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	
cout<<"before reversing"<<" "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
for(int i=0;i<n/2;i++){
//	int temp=arr[i];
//	arr[i]=arr[n-i-1];
//	arr[n-i-1]=temp;
    swap(arr[i],arr[n-i-1]);
}
cout<<"After reversing"<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;



	return 0;
	
}
