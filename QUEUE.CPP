#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 10
struct queue
{
int data[N];
int front,rear;
};
void QInsert(struct queue*,int);
int QDelete(struct queue*);
void Traverse(struct queue*);
void main()
{
int choice,item;
struct queue Q;
Q.front = -1;
Q.rear =-1;
clrscr();
while(1)
{
printf("\nEnter Choice For Queue\n");
printf("1.Insert\n2.Delete \n3.Traverse \n4.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nEnter number For inserting in queue\t");
scanf("%d",&item);
QInsert(&Q,item);
break;
case 2:item=QDelete(&Q);
printf("\nDelete item is %d",item);
break;
case 3:Traverse(&Q);
break;
case 4:exit(1);
break;
default:printf("\nPlease Enter Correct Input");
}
}
}
void QI