#include<stdio.h>
int main(){
	int i,j,n,temp=0,arr[10];
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the elements in array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting\n");
	for(i=0;i<n;i++)
	{
	printf(" %d",arr[i]);
    }
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
