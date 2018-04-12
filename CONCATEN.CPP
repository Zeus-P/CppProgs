#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();
char *concatenate(char *,char *);
char first[10],second[10],*final;
cout<<"Enter the first string:";
gets(first);
cout<<"Enter the secong String:";
gets(second);
final=concatenate(first,second);
cout<<final<<endl;
getch();
}
char *concatenate(char *s,char *t)
{
int len = 0,i;
char final[100];
strcpy(final, s);
len=strlen(final);
final[len++]=' ';
for(i=len+1;*t!='\0';i++)
final[i]=*t++;
final[i]='\0';
return(final);
}