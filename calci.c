#include<stdio.h>
int main(){
	float a,b,result;
	char ch;
    printf("enter the operator\n");
	scanf("%c",&ch);
	printf("enter two no\n");
	scanf("%f%f",&a,&b);
	switch(ch){
		case '+':result=a+b;
		printf("the addition of two is %f\n",result);
		break;
		case '-':result=a-b;
		printf("the substraction of two is %f\n",result);
		break;
	    case '*':result=a*b;
	    printf("the multiplication of two no is %f\n",result);
	    break;
	    case '/':if(b!=0){
	    	result=a/b;
			printf("the division of two no is %f\n",result);
		    break;
		}
		else{
			printf("b should not be 0\n");
			break;
		}
		case '%': result=(int)a%(int)b;
		    printf("the modulus of two no is %f\n",result);
		    break;
		default: 
		printf("Invalid operator\n");
		break;
	}
	printf("Thank you for using services\n");
	return 0;
}
