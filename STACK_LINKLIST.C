#include<stdio.h>
#include<conio.h>
struct stack
{
int element;
struct stack *next;
}*top;
void push(int);
int pop();
void display();
void main()
{
int n1,n2,choice;
while(1)
{
clrscr();
//creating an interactive interface for performing stack operations
printf("Select a choice from the following:");
printf("\n[1] push an elelment into the stack");
printf("\n[2] pop out an elelment from the stack");
printf("\n[3] Display The Stack Elements");
printf("\n[4] Exit\n");
printf("\n\tYour Choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n\tEnter The Element to be pushed into stack: ");
scanf("%d",&n1);
push(n1);
break;
case 2 :pop();
printf("\n\t%d element popped out ofthe stack\n\t",n2);
getch();
break;
case 3:display();
getch();
break;
case 4:exit(1);
break;
default:printf("\nInvalid Choice !\n");
break;
}
}
}
//Push Function
void push(int value)
{
struct stack *ptr;
ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->element=value;
ptr->next = top;
top=ptr;
return;
}
//Pop Fuction;
int pop(void)
{
if(top==NULL)
{
printf("\nStack is Empty.");
getch();
exit(1);
}
else
{
int temp=top->element;
top=top->next;
return (temp);
}
}
void display()
{
struct stack *ptr1=NULL;
ptr1=top;
printf("\nThe Various Stack Elements are: \n");
while(ptr1!=NULL)
{
printf("%d\t",ptr1->element);
ptr1=ptr1->next;
}
}


