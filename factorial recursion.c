#include<stdio.h>
float perc(float sc,float mat,float sans){
	float total=sc+mat+sans;
	float per=(total/300)*100;
	return per;
}
int main(){
float sc,mat,sans;	
printf("enter the marks in science,maths and sanskrit\n");
scanf("%f%f%f",&sc,&mat,&sans);
printf("total percentage is %f\n",per(sc,mat,sans);
return 0;
}
