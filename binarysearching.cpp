#include<iostream>
using namespace std;
int Binarysearch(int arr[],int n,int key){
	int low=0,high=n-1,mid;
	while(low<=high)
	{   mid=(low+high)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
}
int main()
{
	int n,key;
	cout<<"enter the no of elements";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element you want to find out";
	cin>>key;
	cout<<"element found at "<<Binarysearch(arr,n,key);
	return 0;
}
