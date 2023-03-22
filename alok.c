#include<stdio.h>
int main(){
	char name[1000];
	scanf("%[^\n]s",name);
	printf("%s %d",name,strlen(name));
	
	return 0;
}
