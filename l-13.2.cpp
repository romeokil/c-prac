#include<iostream>
#include<algorithm>
using namespace std;

int firstocc(int arr[],int n,int key){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]==key){ 
			if(arr[mid-1]!=key | mid==0){
				return mid;
			}
			else
			high=mid-1;
		}
		else if(arr[mid]<key)
		low=mid+1;
		else
		high=mid-1;
}
return -1;	
}

int lastocc(int arr[],int n,int key){
	int low=0,high=n-1,mid;
	while(low<=high){
	
	mid=low+(high-low)/2;
	if(arr[mid]==key)
	{
		if(arr[mid+1]!=key || mid==n-1){
			return mid;
		}
		else{
			low=mid+1;
		}
	}
	else if(arr[mid]<key){
		low=mid+1;
	}
	else
	    high=mid-1;
}
return -1;	
}
int main(){
	int arr[]={1,2,3,3,5};
	int key;
	cin>>key;
	int x=firstocc(arr,5,key);	
    int y=lastocc(arr,5,key);
    int ans=(y-x)+1;
    cout<<"Total occurence of a no is "<<ans;
	return 0;
}
