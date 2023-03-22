#include<stdio.h>
#include<string.h>
int main(){
	struct student {
		char name[100];
		float roll;
		float cgpa;
	};
	struct student s1={"rahul",23,9.6};
	struct student s2={"shashank",24,9.8};
	struct student s3={"abhishek",25,6.7};
	printf("name of the student is%s\n",s1.name);
	printf("roll of the student is%f\n",s2.roll);
	return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main(){
	struct student {
		char name[50];
		float roll;
		float cgpa;
	};
	struct student s1={"rahul",56,9.9};
	struct student s2={"abhishek",78,8.9};
	
	struct student *ptr=&s1;
	printf("name of a candidate in s1.name %s\n",s1.name);
	printf("name of a candidate in (*ptr).name %s\n",(*ptr).name);
	printf("name of a candidate in ptr->name %s\n",ptr->name);
	return 0;
}*/

