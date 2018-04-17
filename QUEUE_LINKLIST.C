#include<stdio.h>
#include<conio.h>
struct queue
{
int element;
struct queue *next;
};
struct queue *front=NULL;
struct queue *rear=NULL;
void insert(int);
int del();
void display();
void main()
{
int n1,n2,choice;
while(1)
{
clrscr();
printf("\n\nSelect an Option\n");
printf("\n1 - Insert an element into the Queue");
printf("\n2 - Remove an element from the Queue");
printf("\n3 - Display all the elements in the Queue");
printf("\n4 - Exit");
printf("\n\nEnter Your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("enter the Element to be Inserted into the Queue\n");
scanf("%d",&n1);
insert(n1);
break;
case 2:n2=del();
if(n2==-9999)
printf("\n\tQueue is Empty!!");
else
printf("\n\t%d Element removed from the queue\n\t",n2);
getch();
break;
case 3: display();
getch();
break;
case 4:exit(1);
break;
default:printf("\nInvalid Choice.");
getch();
break;
}
}
}
//Insert Function
void insert(int value)
{
struct queue *ptr=(struct queue*)malloc(sizeof(struct queue));
ptr->element = value;
if(front==NULL)
{
front=rear=ptr;
ptr->next=NULL;
}
else
{
rear->next=ptr;
ptr->next=NULL;
rear=ptr;
}
}
//Delete Function
int del()
{
int i;
if(front==NULL)
return(-9999);
else
{
i=front->element;
front=front->next;
return(i);
}
}
//Display Function
void display()
{
struct queue *ptr=front;
if(front==NULL)
{
printf("\n\tQueue Is Empty!!");
return;
}
else
{
printf("Queue's Elements Are :\n");
while(ptr!=rear)
{
printf("\t%d",ptr->element);
ptr=ptr->next;
}
printf("\t%d",rear->element);
}
}