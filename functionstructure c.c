#include<stdio.h>
struct student {
	char name[100];
	float cgpa;
	float roll;
};
void classic(struct student s1){
	printf("the name of a student is %s\n",s1.name);
	printf("the cgpa of a student is %f\n",s1.cgpa);
	printf("the roll of a student is %f\n",s1.roll);
}
int main(){
	struct student s1={"rahul",9.6,45};
	classic(s1);
	
	return 0;
}
