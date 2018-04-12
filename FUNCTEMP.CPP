#include<iostream.h>
#include<conio.h>
template<class T>
T greatest(Tx,Ty,Tz)
{
if(x>y)
if(x>z)
return(x);
else
return(z);
else
if(y>z)
return(y);
else
return(z);
}
void main()
{
clrscr();
int ch;
char choice;
do
{
cout<<"Find The Greatest Numbers"<<endl;
cout<<"1. Among Integer numbers:"<<endl;
cout<<"2. Among float numbers:"<<endl;
cout<<"3. Among double numbers:"<<endl;
cin>>ch;
switch(ch)
{
case 1: cout<<"Enter Integer numbers: "<<endl;
int a,b,c,maxi;
cin>>a>>b>>c;
maxi=greatest(a,b,c);
cout<<"The Greatest Numbers is "<<maxi;
break;
case 2: cout<<"Enter Float Number :"<<endl;
int x,y,z,maxf;
cin>>x>>y>>z;
maxf=greatest(x,y,z);
cout<<"The Greatest Number is :"<<maxf;
break;
case 3: cout<<"Enter Float Number is :"endl;
int m,n,q,maxd;
cin>>m>>n>>q;
maxd=greatest(m,n,q);
cout<<"The Greatest Number is :"<<maxd;
}
cout<<"\nWant To continue(y/n):";
cin>>choice;
}while(choice=='Y'||choice=='y');
getch();
}