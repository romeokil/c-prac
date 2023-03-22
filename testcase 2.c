#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,low,high,mid,i,flag;
	char a[50][50],key[20];
	printf("enter the no of elements \n");
	scanf("%d",&n);
	printf("enter the string element\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	printf("enter the key\n");
	scanf("%s",&key);
    low=0;
	high=n-1;
    while(low<=high){
    	mid=(low+high)/2;
    	if(strcmp(key,a[mid])==0){ flag=1;
    		break;
		}
		else if(strcmp(key,a[mid])>0){
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
	if(flag==1)
	{
		printf("element found at position no %d",mid+1);

	}
	else
	{
	printf("element not found\n");}
	return 0;
}
