#include<stdio.h>
#include<conio.h>
void display(int *);
void main()
{
int a[]={1,2,3,4,5,6,7};
display(a);
}
void display(int *a)
{
int i;
for(i=0;i<7;i++){
printf("Address : %u\n",a);
printf("Value   : %d\n",*a);
a++;
}
}
