#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#define MAX 10
char stack[MAX],postfix[MAX];
int top=-1;
void push(char);
char pop(void);
int eval(int x,int y,char op);
int calculate(void );
void main()
{
char ch;
do
{
top=-1;
clrscr();
printf("\nEnter a postfix Expression\n");
gets(postfix);
printf("\nThe Given Post fix expression is = %s\n",postfix);
printf("\nThe Result of the given expression is : %d\n",calculate());
printf("\nDo You wish to Continue: ");
ch = getche();
}while(ch=='Y'||ch=='y');
}
void push(char sym)
{
if(top>MAX-1)
{
printf("\nstack is full\n");
exit(0);
}
else
stack[++top]=sym;
}
char pop(void)
{
if(top<=-1)
{
printf("\nStack is Empty\n");
exit(0);
}
else
return(stack[top--]);
return 1;
}
int eval(int x,int y,char op)
{
if(op=='+')
return(x+y);
else if(op=='-')
return(x-y);
else if(op=='*')
return(x*y);
else if(op=='/')
return(x/y);
else if(op=='^')
return(pow(x,y));
return 0;
}
int calculate()
{
int i=0;
int x;
int opn1,opn2,ans;
while((x=postfix[i])!='\0')
{
if(x>='0' && x<='9')
push((int) (x-'0'));
else
{
opn2=pop();
opn1=pop();
ans=eval(opn1,opn2,x);
push(ans);
}
i++;
}
return ans;
}