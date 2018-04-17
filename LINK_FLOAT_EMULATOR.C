#include<stdio.h>
void linkfloat()
{
float a,*b;
b=&a;
a=*b;
}
void main()
{
typedef struct book{
char a;
float price ;
int pages;
}book;
book b[3];
int i;
for(i=0;i<3;i++)
{
fflush(stdin);
scanf("%c %f %d",&b[i].a,&b[i].price,&b[i].pages);
}
for(i=0;i<3;i++)
{
printf("\n %c %f %d",b[i].a,b[i].price,b[i].pages);

}}

