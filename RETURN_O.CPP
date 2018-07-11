#include<iostream.h>
#include<conio.h>

class test{
int a,b;
public:
void getval(int x,int y)
{
a=x;
b=y;
}
void display(test t)
{
cout<<"A = "<<t.a<<"\n";
cout<<"B = "<<t.b<<"\n";
}
friend test sum(int , int);
};

test  sum(int t1,int t2)
{
test t;
t.a=t1+t2;
t.b=t1+t2;
return t;
}

int main(){
test A,B,C;
A.getval(100,10);
B.getval(200,20);
C=sum(10,20);
A.display(A);
B.display(B);
C.display(C);
getch();
return 0;
}
