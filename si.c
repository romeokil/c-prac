#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("enter the principal ,rate of intrest ,time");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("the si is %f\n",si);
	
	return 0;
}
