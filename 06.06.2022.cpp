#include<iostream>
using namespace std;

int RotatedSearch(int arr[],int key,int n)
{
	int low=0,high=n-1;
	int mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]==key)
		{
		return mid;
	    }
		else if(arr[low]<=arr[mid])
		{
			if(key>=arr[low] && key<arr[mid]){
				high=mid-1;
		    }
				else
				low=mid+1;
	    }
			else
			{
				if(key>arr[mid] && key<=arr[high]){
					low=mid+1;
				}
					else
					high=mid-1;
			
				
			}
		}
	}
int main(){
	int n,key;
	cout<<"enter the no of elements in rotated array";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in rotated array";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"enter the element you want to find out";
	cin>>key;
	cout<<RotatedSearch(arr,key,n);
	return 0;
}
