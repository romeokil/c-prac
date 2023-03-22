#include<stdio.h>
#include<string.h>
/*int countlength(char arr[]){
	int i,count=0;
	for(i=0;arr[i]!='\0';i++){
		count++;
	}
	return count-1;
}
*/
int main(){
	int x;
char name[100];
printf("enter your name");
fgets(name,100,stdin);
puts(name);
x=strlen(name);
printf("the length of a string is %d\n",x-1);
return 0;
}

