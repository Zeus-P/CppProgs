#include<stdio.h>
void main()
{
int a=1;
int* i,**k,***m;
i=&a;
k=&i;
m=&k;
printf("%d\n",a);
printf("%u\n",*i);
printf("%u\n",**k);
printf("%u\n",***m);
}