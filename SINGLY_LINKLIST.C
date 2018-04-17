#include<stdio.h>
#include<malloc.h>
typedef
struct node
{
int data;
struct node *next;
}node;
node *start;
void InsertFirst(int);
void InsertLast(int);
void InsertAfter(int, int);
void Delete(int);
void Search(int);
void Traverse();

void main()
{
int item,choice,key;
do
{
printf("\n\nLinked List");
printf("\nEnter Choice\n");
printf("1.Insert First \n2.Insert Last\n3.Insert After\n");
printf("4.Delete\n5.Search\n6.Traverse\n7.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\nEnter one number");
scanf("%d",&item);
InsertFirst(item);
break;
case 2: printf("\nEnter One Number");
scanf("%d",&item);
InsertLast(item);
break;
case 3 : printf("\nEnter one number");
scanf("%d",&item);
printf("\nEnter the element after which you wanna insert the node");
scanf("%d",&key);
InsertAfter(item,key);
break;
case 4 : printf("\nEnter Number which do you wanna delete");
scanf("%d",&item);
Delete(item);
break;
case 5 : printf("\nEnter number which do you want to search");
scanf("%d",&item);
Search(item);
break;
case 6 : Traverse();
}
}while(choice!=7);
}

void InsertFirst(int item)
{
node *n;
n = (node*)malloc(sizeof(node));
if(n == NULL)
{
printf("Memory is Full");
return;
}
n->data=item;
n->next=start;
start=n;
printf("\n%d has been Inserted",item);
}
void InsertLast(int item)
{
node *n,*t;
n=(node*)malloc(sizeof(node));
if(n == NULL)
{
printf("Memory is Full");
return;
}
n->data=item;
n->next=NULL;
if(start==NULL)
{
start=n;
printf("\n%d has been inserted",item);
}
else
{
t=start;
while(t->next!=NULL)
{
t=t->next;
}
t->next=n;
printf("\n%d has been inserted",item);
}
}
void InsertAfter(int item, int key)
{
node *n,*t;
n = (node*)malloc(sizeof(node));
if(n == NULL)
{
printf("Memory is Full");
return;
}
n->data=item;
n->next=NULL;
t = start;
while(t!=NULL)
{
if(t->data==key)
{
n->next=t->next;
t->next=n;
printf("\n%d has been inserted",item);
break;
}
t=t->next;
}
if(t==NULL)
printf("\n%d is not present in the list",key);
}
void Delete(int item)
{
node *t,*p;
if(start->data==item)
{
t=start;
start=start->next;
free(t);
printf("%d has been deleted",item);
}
else
{
p=start;
t=start->next;
while(t!=NULL)
{
if(t->data==item)
{
p->next=t->next;
free(t);
printf("%d has been deleted",item);
break;
}
p=t;
t=t->next;
}if(t==NULL)
printf("\n%d is not present in the list",item);
}
}
void Search(int item)
{
node *t;
t=start;
while(t!=NULL)
{
if(t->data==item)
{
printf("\n%d is Not present in the list",item);
break;
}
t = t->next;
}
if(t==NULL)
printf("\n%d is not present in the list",item);
}
void Traverse()
{
node *t;
t = start;
if(t==NULL)
printf("\nList is empty");
else {
printf("\nLinked List\n");
while(t!=NULL)
{
printf("%d\t",t->data);
t=t->next;
}
}
}
