#include<stdio.h>
int main(){
/*	int x;
	int *ptr;
	ptr=&x;
	*ptr=0;
	printf("the value of x is%d\n",x);
	printf("the value of ptr is%d\n",*ptr);
	*ptr+=5;
	printf("the value of x is %d\n",x);
	printf("the value of ptr is %d\n",*ptr);
	(*ptr)++;
	printf("the value of x is %d\n",x);
	printf("the value of ptr is %d\n",*ptr);
	return 0;*/
/*	float price=100.00;
	float *ptr=&price;
	float **pptr=&ptr;
	printf("the value of price is %d\n",price);
	printf("the value of ptr is %d\n",*ptr);
	printf("the value of pptr is %d\n",*pptr);
	*/
	int i=5;
	int *ptr=&i;
	int **pptr=&ptr;
	printf("the value of i is %d\n",i);
	printf("the value of ptr is %d\n",*ptr);
	printf("the value of pptr is %d\n",**pptr);
}
