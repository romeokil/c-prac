#include<stdio.h>
int sum(int n){
	if(n==1)
	{
	return 1;
	}
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}
int main(){
	int n;
	printf("enter the no upto which you want sum\n");
	scanf("%d",&n);
	printf("the sum is %d\n",sum(n));
	return 0;
}
