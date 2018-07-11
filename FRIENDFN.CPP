#include<iostream.h>
#include<conio.h>
 class A;
 class C;
 class B{
 int b;
 public:
 void getval(int x){
 b=x;
 }
 void putval(){
 cout<<"Value of b is "<<b<<"\n";
 }
 friend void add(A,B,C);
 };
 class A{
 int a;
 public:
 void getval(int x){
 a=x;
 }
 void putval()
 {
 cout<<"Value Of a is "<<a<<"\n";
 }
 friend void add(A,B,C);
 };

 class C{
 int c;
 public:
 void getval(int x)
 {
 c=x;
 }
 friend void add(A,B,C);
 };

 void add(A ob1, B ob2, C ob3){
 cout<<"OutPut of Sum Of A,B and C "<<ob1.a+ob2.b+ob3.c<<"\n";
 }

 int main(){
 clrscr();
 A a;
 B b;
 C c;
 a.getval(100);
 b.getval(200);
 c.getval(300);
 a.putval();
 b.putval();

 add(a,b,c);
 getch();
 return 0;
 }