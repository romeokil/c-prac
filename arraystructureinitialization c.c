#include<stdio.h>
#include<string.h>
int main(){
	struct student {
		char name[100];
		float roll;
		float cgpa;
		
	};
	struct student ece[100];
	ece[0].roll=23;
	ece[0].cgpa=9.8;
	strcpy(ece[0].name,"rahul");
	ece[1].roll=24;
	ece[1].cgpa=8.8;
	strcpy(ece[1].name,"shashank");
	ece[2].roll=25;
	ece[2].cgpa=9.5;
	strcpy(ece[2].name,"abhishek");
	ece[3].roll=26;
	ece[3].cgpa=9.2;
	strcpy(ece[3].name,"pratik");
	ece[4].roll=27;
	ece[4].cgpa=6.7;
	strcpy(ece[4].name,"alok");
	printf("name of a student is %s\n",ece[0].name);
	printf("roll of a student is %f\n",ece[0].roll);
	printf("cgpa of a student is %f\n",ece[0].cgpa);
	printf("name of a student is %s\n",ece[1].name);
	printf("roll of a student is %f\n",ece[1].roll);
	printf("cgpa of a student is %f\n",ece[1].cgpa);
	printf("name of a student is %s\n",ece[2].name);
	printf("roll of a student is %f\n",ece[2].roll);
	printf("cgpa of a student is %f\n",ece[2].cgpa);
	printf("name of a student is %s\n",ece[3].name);
	printf("roll of a student is %f\n",ece[3].roll);
	printf("cgpa of a student is %f\n",ece[3].cgpa);
	printf("name of a student is %s\n",ece[4].name);
	printf("roll of a student is %f\n",ece[4].roll);
	printf("cgpa of a student is %f\n",ece[4].cgpa);
	return 0;
	
}
