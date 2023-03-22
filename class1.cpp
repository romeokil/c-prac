#include<stdio.h>
void create();
void display();
int n,a[50],count=0,i;
int main(){
	int ch;
	while(1){
	printf("\n--ARRAY OPERATIONS MENU--\n");
	printf("1.CREATE AN ARRAY\n");
	printf("2.DISPLAY AN ARRAY\n");
	printf("3.EXIT\n");
	printf("ENTER YOUR CHARACTER\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:if(count==0)
	             create();
	             else
	             printf("ARRAY ALREADY CREATED\n");
	             break;
		case 2:if(count==0)
			printf("ARRAY NOT CREATED\n");
			else
			display();
			break;
		case 3:return(0);
		default:printf("INVALID CHOICE\n");
	
		}
	}
}
	
	void create(){
		printf("enter the no of elements\n");
		scanf("%d",&n);
		printf("enter the elements\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		count=1;
		printf("ELEMENT INCLUSION SUCCESSFUL\n");
	}
	void display(){
		printf("Your elements of the given array\n");
		for( i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
	}
