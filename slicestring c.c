#include<stdio.h>
void detervowel(char str1[],char ch){
	int i;
	int count=0;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==ch);
		count++;
	}
	if(count==0){
		printf("vowel is not present\n");
	}
	else {
		printf("vowel is present\n");
	}
}
int main(){
	char str1[100];
	char ch='k';
	printf("enter the string\n");
	scanf("%s",str1);
	detervowel(str1,ch);
	
	return 0;
}
