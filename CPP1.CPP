#include<iostream.h>
#include<conio.h>
class test {
int a;
float b;
public:
void getdata();
void putdata();
};
void test::getdata()
{
cout<<"Enter Values of a and b\n";
cin>>a>>b;
}
void test::putdata(){
cout<<"value of a "<<a<<"\nvalue of b"<<b;
}
int main(){
clrscr();
test t;
t.getdata();
t.putdata();
getch();
return 0;
}