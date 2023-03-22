#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,root1,root2,disc,real,img;
	printf("enter the value of a,b & c\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		printf("This is not a quadratic eqn\n");
		return 0;
	}
    disc=b*b-4*a*c;
    if(disc>0){
    	printf("Roots are real and distinct\n");
        root1=(-b+sqrt(disc))/2*a;
        root2=(-b-sqrt(disc))/2*a;
        printf("The roots are \nRoot1=%f Root2=%f",root1,root2);
	}
	else if(disc==0){
		printf("Roots are equal\n");
		root1=-b/(2*a);
		printf("root1=root2=%f",root1);
	}
	else{
	    printf("Roots are imaginary & distinct\n");
	    real=-b/(2*a);
	    img=sqrt(fabs(disc))/(2*a);
	    printf("root1=%f+i%f\nroot2=%f-i%f\n",real,img,real,img);
	}
	return 0;
}
