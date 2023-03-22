#include<stdio.h>
#include<string.h>
void salting(char password[]){
	char salt[d]="123";
	char newpass[200];
	strcpy(newpass,password);
	strcat(newpass,salt);
	puts(newpass);
}
int main(){
    char password[100];
    printf("enter the password");
	scanf("%s",password);
	salting(password);		
	return 0;
}
