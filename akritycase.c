#include<stdio.h>
int main(){
	int x;
	printf("enter the no to check prime or not\n");
	scanf("%d",&x);
	if(x==2){
		printf("this is a prime no");
	}
	else if(x%2==0){
		
		printf("entered no is not prime no\n");
	}
	else{
		printf("entered no is prime no\n");
	}
	return 0;  
}

