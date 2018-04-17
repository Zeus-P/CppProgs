#include<stdio.h>
TOWER(int n,char b,char a,char e)
{
if(n==1)
{
printf("%c -> %c\n",b,e);
return 0;
}
TOWER(n-1,b,e,a);
printf("%c -> %c\n",b,e);
TOWER(n-1,a,b,e);
return 0;
}
void main()
{
int n,s=1,i;
char a='B',e='C',b='A';
printf("Enter No. of Discs Do you Wannna Check the steps out For :");
scanf("%d",&n);
printf("Total steps Are ");
for(i=1;i<=n;i++)
s=s*2;
printf("%d\n",s-1);
TOWER(n,b,a,e);
getche();
}
