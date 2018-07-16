#include<iostream>
#include<conio.h>
using namespace std;
class test{
int a,b;
public:
    test sum(test);
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

};

test test :: sum(test t2)
{
test t;
t.a=a+t2.a;
t.b=b+t2.b;
return t;
}

int main(){
test A,B,C,D;
A.getval(100,10);
B.getval(200,20);
C=A.sum(B);
A.display(A);
B.display(B);
C.display(C);
getch();
return 0;
}
