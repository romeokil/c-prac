#include<stdio.h>
/*int _square(int *n){
	*n=(*n)*(*n);
	printf("the square of a number is %d\n",*n);
}
int square(int n){
	n=n*n;
	printf("the square of a number is %d\n",n);
}
int main(){
	int number =4;
	square(number);
	printf("the number of square is %d\n",number);
	_square(&number);
	printf("the number of square is %d\n",number);
	return 0;
}
*/
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	printf("the value of a and b is %d & %d\n",a,b);
}
void _swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("the value of a and b is %d & %d\n",*a,*b);
}
int main(){
	int x,y;
	printf("enter two no \n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("the value of x and y is %d & %d\n",x,y);
   _swap(&x,&y);
    printf("the value of x and y is %d & %d\n",x,y);
	return 0;
}
