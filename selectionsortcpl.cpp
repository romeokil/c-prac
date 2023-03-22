//Structure
#include<stdio.h>
typedef struct 
{
char name[50];
int usn[20];
int marks;
}Student;

int main(){
	Student s[10];
	int n,i;
	float sum,avg;
  printf("enter the no of students\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	printf("enter the name of the student %d",i+1);
	  scanf("%s",&s[i].name);
    printf("enter the usn of the student %d",i+1);
      scanf("%s",&s[i].usn);
    printf("enter the marks of the student %d",i+1);
      scanf("%d",&s[i].marks);
      
    sum=sum+s[i].marks;
  	
  } 
  avg=sum/float(n);
  printf("Average marks for whole class is %f\n",avg);
  printf("list of students who got less marks than average\n");
  for(i=0;i<n;i++){
  	if(s[i].marks<=avg){
  	printf("name- %s\n",s[i].name);
  	printf("usn - %s\n",s[i].usn);
  	printf("marks- %d\n",s[i].marks);
    }
  }
printf("list of students who got more marks than average\n");
  for(i=0;i<n;i++){
  	if(s[i].marks>avg){
  	printf("name- %s\n",s[i].name);
  	printf("usn - %s\n",s[i].usn);
  	printf("marks- %d\n",s[i].marks);
    }
  }  
	return 0;
}
