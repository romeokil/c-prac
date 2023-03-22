#include<stdio.h>
#include<string.h>
int main(){
	int x;
    char str1[]="hello";
    char str2[]="hello";
    x=strcmp(str1,str2);
    if(x==0){
    	printf("string are equal\n");
	}
	else if(x>0){
		printf("first string having the greater ascii value");
	}
	else
	{
		printf("second string having the smaller ascii value");
	}
    return 0;
}
