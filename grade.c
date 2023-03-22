#include<stdio.h>
int main(){
	char ch;
	printf("enter the grade\n");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
			printf("excellent !\n");
			break;
		case 'b':
		case 'c':
		    printf("well done\n");
		    break;
		case 'd':
		    printf("you passed \n");
		    break;
		case 'f':
		    printf("better try again \n");
		    break;
		default:
			printf("invalid input \n");
			break;
		}
	return 0;
}
