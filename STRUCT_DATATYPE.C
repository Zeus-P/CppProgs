#include<stdio.h>
void main()
{
struct book{
char a;
float price;
int pages;
}b1,b2,b3;
scanf("%c %f %d",&b1.a,&b1.price,&b1.pages);
fflush(stdin);
scanf("%c %f %d",&b2.a,&b2.price,&b2.pages);
fflush(stdin);
scanf("%c %f %d",&b3.a,&b3.price,&b3.pages);
fflush(stdin);
printf("\n%c %f %d",b1.a,b1.price,b1.pages);
printf("\n%c %f %d",b2.a,b2.price,b2.pages);
printf("\n%c %f %d",b3.a,b3.price,b3.pages);
}