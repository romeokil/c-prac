#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
};
//int isempty(struct stack p){
//	if(p.top==-1){
//		return -1;
//	}
//	else{
//		return 0;
//	}
//}
//int isfull(struct stack p){
//	if(p.top==p.size-1){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
int main(){
	struct stack s;
	int i;
	s.size=6;
	s.top=-1;
	s.arr=(int*)malloc(s.size*sizeof(int));
	s.arr[0]=7;
	s.top++;
	s.arr[1]=8;
	s.top++;
	s.arr[2]=9;
	s.top++;
	s.arr[3]=2;
	s.top++;
	s.arr[4]=4;
	s.top++;
	s.arr[5]=5;
	s.top++;
	
//	if(isempty(s)){
//		printf("Stack is empty");
//	}
//	else{
//		printf("Stack is not empty");
//	}
//    if(isfull(s)){
//    	printf("Stack is full");
//	}
//	else{
//		printf("Stack is not full");
//	}
    printf("Element in the stack are");
     for(i=0;i<s.size-1;i++){
     	printf(s.arr[i]);
     	printf("\n");
	 }
	return 0;
}
