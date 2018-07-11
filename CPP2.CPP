#include<iostream.h>
#include<conio.h>
class add{
int a,b,t;
public:
int sum();
};
int add::sum()
{
cout<<"Enter Two values\n";
cin>>a>>b;
t=a+b;
return t;
}
int main(){
clrscr();
int y;
add a;
y=a.sum();
cout<<"Sum is "<<y;
getch();
return 0;
}