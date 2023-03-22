#include<stdio.h>
#include<math.h>
void main()
{
	int i,n;
	float x,sum=1,t=1;
	printf("enter the value for x:");
	scanf("%f",&x);
	printf("enter the value for n:");
	scanf("%d",&n);
	x=x*3.14159/180;
	for(i=1;i<=n;i++)
	{
		t=t*(-1)*x*x/(2*i*(2*i+1));
		sum=sum+t;
	}
	printf("the value of cos(%f)=%4f\n",x,sum);
	printf("the value of cos(%f)=%f\n",x,cos(x));
}
