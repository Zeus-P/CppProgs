#include<stdio.h>
#include<malloc.h>
typedef
struct node
{
int data;
struct node* next;
}
node;
node *start;
void InsertFirst(int);
void InsertLast(int);
void InsertAfter(int, int);
void Delete(int);
void Search(int);
void Traverse();
void main()
{
int item,choice, key;
do
{
printf("\n\nLinked List");
printf("\nEnter choice\n");
printf("1.Insert First\n2.Insert Last\n3.Insert After\n");
printf("4.Delete\n5.Search\n6.Traverse\n7.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nEnter One Number");
scanf("%d",&item);
InsertFirst(item);
break;
case 2:printf("\nEnter One Number");
scanf("%d",&item);
InsertLast(item);
break;
case 3: printf("\nEnter One Number");
scanf("%d",&item);
printf("\nEnter the Element after which you wanna insert the node");
scanf("%d",&key);
InsertAfter(item,key);
break;
case 4: printf("\nEnter numberwhich you do you wanna delete");
scanf("%d",&item);
Delete(item);
break;
case 5 : printf("\nEnter Number which do you wanna search");
scanf("%d",&item);
Search(item);
break;
case 6: Traverse();
}
}while(choice!=7);
}

void InsertFirst(int item)
{
node *n,*t;
n = (node*)malloc(sizeof(node));
n->data=item;
if(start==NULL)
{
start=n;
n->next=start;
printf("\n%d has been inserted",item);
}
else
{
t=start;
while(t->next!=start)
{
t=t->next;
}
t->next=n;
n->next=start;
start=n;
printf("\n%dhas been inserted",item);
}
}
void InsertLast(int item)
{
node *n,*t;
n= (node*)malloc(sizeof(node));
n->data=item;
n->next=NULL;

if(start==NULL)
{
start=n;
n->next=start;
printf("\n%d has been inserted",item);
}
else
{
t= start;
while(t->next!=start)
{
t= t->next;
}

t->next=n;
n->next=start;
printf("\n%d has been inserted",item);
}
}
void InsertAfter(int item, int key)
{
node *n,*t;
n = (node*)malloc(sizeof(node));
n->data=item;
n->next=NULL;
t=start;
do{
if(t->data==key)
{
n->next=t->next;
t->next=n;
printf("\n%d hadbeen inserted",item);
return;
}
t=t->next;
}
while(t!=start);
printf("\n%d is not present in the list",key);
}
void Delete(int item)
{
node *t,*p;
if(start->data==item)
{
p=start;
t=start;
if(start==start->next)
{
free(t);
start=NULL;
printf("\n%d has been deleted",item);
}
else
{
while(t->next!=start)
{
t=t->next;
}
start=start->next;
t->next=start;
free(p);
printf("%d has been deleted",item);
}
}
else{
p= start;
t=start->next;
while(t!=start)
{
if(t->data==item)
{
p->next=t->next;
free(t);
printf("%d has been deleted",item);
break;
}
else
{
p=t;
t=t->next;
}
}
if(t==start)
printf("\n%d is not present in the list",item);
}
}
void Search(int item)
{
node *t;
t=start;
do
{
if(t->data==item)
{
printf("\n%d is present in the list",item);
return;
}
t=t->next;
}
while(t!=start);
printf("\n%d is not present in the list",item);
}
void Traverse()
{
node *t;
t=start;
if(t==NULL)
printf("\nList is Empty");
else
{
printf("\nLinked List\n");
do
{
printf("%d\t",t->data);
t=t->next;
}
while(t!=start);
}
}


