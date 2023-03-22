#include<stdio.h>
struct vector {
	int x;
	int y;
};
void Calcsum(struct vector v1,struct vector v2,struct vector sum);
int main()
{
	struct vector v1={5,10};
	struct vector v2={4,10};
	struct vector sum={0};
	CalcSum(v1,v2,sum);
	return 0;	
}
void Calcsum(struct vector v1,struct vector v2,struct vector sum)
{
	sum.x=v1.x+v2.x;
	sum.y=v1.y+v2.y;
	printf("The sum of x component is %d\n: sum.x");
	printf("The sum of y component is %d\n: sum.y");
}
