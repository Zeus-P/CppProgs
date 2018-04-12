#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int g;
scanf("%d",&g);
if(g<5)
goto sos;
printf("\nHello Priyanshu\n");
exit(1);
sos:printf("You Are Insane\n");
getch();
return 0;
}
