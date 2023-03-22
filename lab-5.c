#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int no;
struct node *link;
}NODE;
NODE *first=NULL;
int i,n;
int main_menu();
void create();
void insert_rear();
void insert_front();
void delete_rear();
void delete_front();
void SLL_stack();
void SLL_queue();

void create()
{
printf("\n enter the number of  Integers\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the integers \n");
insert_rear();
}
}
void insert_front()
{
NODE *newnode=NULL;
newnode=(NODE*)malloc(sizeof(NODE));
//printf("enter the number\n");
scanf("%d", &newnode->no);
newnode->link=first;
first=newnode;
}

void display()
{
if(first==NULL)
{
printf("\nlist is empty");
return;
}
NODE *temp=first;
int total=0;
printf("\n INTEGER  LIST\n");
while(temp!=NULL)
{
printf("%d->", temp->no);
temp=temp->link;
total++;
}
}
void insert_rear()
 {
 NODE *newnode=NULL;
 NODE *temp;
 newnode=(NODE*)malloc(sizeof(NODE));
// printf("\enter integer \n");
 scanf("%d", &newnode->no);
 newnode->link=NULL;
 if(first==NULL)
 first=newnode;
 else
 {
 temp=first;
 while(temp->link!=NULL)
 temp=temp->link;
 temp->link=newnode;
 }
 }
 void delete_rear()
 {
 if(first==NULL)
 {
 printf("list is empty\n");
 return;

 }
 NODE *slast,*temp;
 slast=temp=first;
 while(temp->link!=NULL)
 {
 slast=temp;
 temp=temp->link;
 }
 slast->link=NULL;
 free(temp);
 }

void delete_front()
{
 if(first==NULL)
 {
 printf("\nlist is empty!\n");
 return;
 }
 NODE *temp=first;
 first=first->link;
 free(temp);
 }

void search()
{

int key, flag=0;
printf("enter the integer to be searched\n");
scanf("%d", &key);
if(first==NULL)
{

printf("\nlist is empty");
return;
}
NODE *temp=first;
while(temp!=NULL)
{
if(key==temp->no)
{
flag=1;
break;
}
temp=temp->link;
}
if(flag==1)
printf("element found \n");
   else
printf("element not found\n");
}

int main()
{
main_menu();
return 0;
}
int main_menu()
{
int ch;
while(1)
{
printf("\n SINGLY LINKED LIST IMPLEMENTATION\n");
printf("\n 1. CREATE LIST\n");
printf("\n 2. SLL USING STACK\n");
printf("\n 3. SLL USING QUEUE\n");
printf("\n 4. DISPLAY\n");
printf("\n 5.EXIT\n");
printf("\n ENTER YOUR CHOICE\n");
 scanf("%d",&ch);
switch(ch)
{
case 1: create();
break;
case 2: SLL_stack(); 
break;
case 3: SLL_queue();
break;
case 4: display(); break;
case 5: exit(0);
default: printf("\n INVALID CHOICE\n");
}
}
}
void SLL_stack()
{
int ch; 
while(1)
{
printf("\n  SLL using Stack\n");
printf("\n 1. insert from rear\n");
 printf("\n 2. delete from rear\n");
 printf("\n 3. display\n");
 printf("\n 4. Linear Search \n");
 printf("\n 5. exit \n");
printf("\n enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert_rear();
break;
case 2: delete_rear();
break;
case 3: display();
break;
case 4: search();
        break;
case 5: main_menu();
 break;
default: printf("\n wrong choice\n");
}
}
}
void SLL_queue()
{
int ch;
while(1)
{
printf("\n  SLL using Queue\n");
printf("\n 1. insert from rear\n");
printf("\n 2. delete from front\n");
printf("\n 3. display\n");
printf("\n 4. Concatenation\n");
printf("\n 5. exit \n");
printf("\n enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert_rear();
break;
case 2: delete_front();
break;
case 3: display();
break;
case 5: main_menu();
break;
default: printf("\n wrong choice\n");
}
}
}
