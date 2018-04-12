#include<stdio.h>
#include<conio.h>
#pragma warn -rvl
void strcpy(char*,char*);
int strcmp(char*,char*);
void main()
{
int i,j,n,l;
char a[20][20],t[20],choice;
clrscr();
do{
printf("How Many Names Do U wanna Sort ?\n");
scanf("%d",&n);

printf("\nEnter %d Names To Be Sorted\n",n);
for(i=0;i<=n;i++)
gets(a[i]);
printf("\nThe Entered List Of Names To Be Sorted is \n");
for(i=0;i<=n;i++)
puts(a[i]);
for(i=0;i<=n;i++)
for(j=i+1;j<=n;j++)
{
l=strcmp(a[i],a[j]);
if(l>0)
{
strcpy(t,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],t);
}
}
puts("\nThe Sorted List Is ");
for(i=0;i<=n;i++)
puts(a[i]);
printf("\nDo You Wanna Sort more Names (Y/N) ?\n");
scanf("%c",&choice);
}while(choice == 'y' || choice == 'Y');
getch();
}
void strcpy(char *t,char *s)
{
while(*s != '\0')
{
*t=*s;
s++;
t++;
}
*t='\0';
}
int strcmp(char *p1,char *p2)
{
while(*p1 != '\0' || *p2 != '\0')
{

if(*p1!=*p2)
{
return(*p1-*p2);
}
else
{
p1++;
p2++;
}
}
if(*p1=='\0' && *p2=='\0')
return 0;
}