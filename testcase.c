#include<stdio.h>
#include<math.h>
int main(){
int i,n;
float sum=0,avg,s1=0,s;
printf("enter the value of n\n");
scanf("%d",&n);
float *p,a[n];
printf("enter the elements\n");
p=a;
for(i=0;i<n;i++){
    scanf("%d",p);
    p++;
}
p=a;
for(i=0;i<n;i++)
{
    sum+=*p;
    p++;
}
avg=sum/n;
p=a;
for(i=0;i<n;i++){
    s1=s1+pow((*p-avg),2);
    p++;
}
s=sqrt(s1/n);
printf("Sum of all no is %f\n",sum);
printf("Average of all no is %f\n",avg);
printf("Standard deviation of all no is %f\n",s);
 return 0;
}
