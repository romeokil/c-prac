#include<stdio.h>
void dowork(int a,int b,int *sum,int *prod,int *avg){
	*sum=a+b;
	*prod=a*b;
	*avg=(a+b)/2;
}
int main(){
	int a=10,b=4;
	int sum,prod,avg;
	dowork(a,b,&sum,&prod,&avg);
	printf("sum= %d,prod= %d,avg= %d\n",sum,prod,avg);	
	return 0;
}
