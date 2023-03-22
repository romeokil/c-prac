#include<stdio.h>
int main(){
	int x;
	printf("enter the no you want to check even or odd\n");
	scanf("%d",&x);
	if(x%2==0)
	{
		
		printf("entered no is even no %d \n",x);
		
	}
	else
	printf("entered no is odd no %d \n",x);
	return 0;
}
