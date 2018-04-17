#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap(char *x,char *y)
{
char temp;
temp=*x;
*x=*y;
*y=temp;
}

void permute(char *a,int l,int r)
{
int i;
if(l==r)
printf("%s\n",a);
else
{
for(i=1;i<=r;i++)
{
swap((a+l),(a+i));
permute(a,l+1,r);
swap((a+l),(a+i));
}
}
}
int main()
{
char *s,c;
int n;
clrscr();
do{
printf("How many Characters are there in your string to see all permutations ?\n");
scanf("%d",&n);
s=(char*)malloc(n+1);
printf("Enter Your String :  ");
scanf("%s",s);
permute(s,0,n-1);
printf("Do You wanna See More ?(Y/N)\n");
c=getch();
}while(c=='Y'||c=='y');
return 0;
}