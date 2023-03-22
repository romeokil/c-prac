#include<stdio.h>
int main(){
	float a,b,result;
	char ch;
	printf("enter two operator\n");
	scanf("%f%f",&a,&b);
	printf("enter the operation\n");
	scanf("%c",&ch);
	switch(ch){
		case '+':
		result=a+b;
		printf("result is%f\n",result);
		break;
		case '-':
		result=a-b;
		printf("result is%f\n",result);
		break;
		case '*':
		result=a*b;
		printf("result is%f\n",result);
		case '/':
			if(b!=0){
			result=a/b;
			printf("result is%f\n",result);	
			}
			else{
				printf("divisible by 0 is not possible \n");
			}
		case '%':
		result=(int)a%(int)b;
		printf("result is%f\n",result);
		break;
		default:
		printf("Not a valid operator\n");
		break;
			}
	return 0;
}
