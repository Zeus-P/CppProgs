#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void showbits(unsigned char n){
int i;
unsigned char k,andmask;
for(i=7;i>=0;i--)
{
andmask=1<<i;
k=n&andmask;
k==0?printf("0"):printf("1");
}
}
void main()
{
unsigned char a;
char choice;
clrscr();
do
{
printf("Enter a number between 0 to 255\n");
scanf("%d",&a);
showbits(a);
printf("\nDo You Wanna Continue?(Y/N)\n");
choice=getch();
 }while(choice=='y'|| choice=='Y');
}