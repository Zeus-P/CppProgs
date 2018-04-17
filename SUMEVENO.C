#include<stdio.h>
#include<conio.h>
int *sumodd(int num)
{
int i;
int osum=0;
for(i=1;i<=num;i=i+2)
osum=osum+i;
return &osum;
}
int *sumeven(int num)
{
int i;
int esum=0;
for(i=2;i<=num;i=i+2)
esum=esum+i;
return &esum;
}
void main()
{
int limit,op;
int *ptr;
clrscr();
printf("Enter The end number ");
scanf("%d",&limit);
printf("\n1. sum of odd natural numbers ");
printf("\n2. sum of even natural numbers ");
printf("\nYour option: ");
scanf("%d",&op);
if(op==1)
{
ptr=sumodd(limit);
printf("\nThe Sum of all odd natural numbers up to %d is = %d",limit,*ptr);
}
else if(op==2)
{
ptr=sumeven(limit);
printf("The Sum of All Even Natural Numbers up to %d is = %d",limit,*ptr);
}
else
printf("\nOption is not 1 or 2 ");
getch();
}
