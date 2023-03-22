#include<stdio.h>
#include<string.h>
int main(){
struct student{
	char name[100];
	float roll;
	float cgpa;
};
struct student s1;
s1.roll=78;
s1.cgpa=6.9;
strcpy(s1.name,"putkichoda");
printf("name of a student is %s\n ",s1.name);
printf("roll of a student is %f\n",s1.roll);
printf("cgpa of a student is %f\n",s1.cgpa);
return 0;
}
