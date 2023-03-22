#include<stdio.h>
int fib(int n){
	if(n==0){
		return 0; 
	}
	if(n==1){
		return 1;
	}
	int Fib2=fib(n-2);
	int Fib1=fib(n-1);
    int fibN=Fib1+Fib2;
    //printf("fib of %d = %d\n",n,fibN);
	return fibN;
	
}
int main(){
int n;
printf("enter the no upto you want fibonacci series\n");
scanf("%d",&n);
printf("%d",fib(n));
return 0;
}
