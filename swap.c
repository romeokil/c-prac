#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter two no to swap\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping no is %d and %d\n",a,b);
	
	return 0;
}
