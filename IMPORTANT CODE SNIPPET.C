#include<stdio.h>
#include<stdlib.h>
void show(int (*q)[2],int a,int b)
{
int i,j;
int *p;
for(i=0;i<a;i++)
{
p=(int*)q+i;
for(j=0;j<b;j++)
printf("%d",*(p+j));
printf("\n");
}
}
void main()
{
int a[3][2]= {
1,2,
3,4
,5,6};
show(a,3,2);
}
