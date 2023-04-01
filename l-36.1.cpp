//	Quick sort
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
	int pivot=arr[s];//taking the pivot element
	int count=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot)
		count++;
	}
	int pivotindex=s+count;//getting the actual pivot index
	swap(arr[pivotindex],arr[s]);//putting the pivot element in right place
	
	//checking ki left element<pivot hai
	//checking ki right element>pivot hai
	
	int i=s,j=e;
	while(i<pivotindex && j>pivotindex){
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<pivotindex && j>pivotindex){
			swap(arr[i++],arr[j--]);
		}
	}
	return pivotindex;
	
}
void quicksort(int arr[],int s,int e){
	//base case
	if(s>=e)
		return ;
	
	//partition
	int p=partition(arr,s,e);
	
	//left wala part sort krna hai
	quicksort(arr,s,p-1);
	//right wala part sort krna hai
	quicksort(arr,p+1,e);
	
}
int main(){
	int arr[]={10,80,30,90,40,50,70};
	int size=7;
	
    quicksort(arr,0,size-1);
    //calling the quicksort function
    for(int i=0;i<size;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
