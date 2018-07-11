#include<iostream>
#include<conio.h>

using namespace std;
class pass_obj
{
int h,m;
public:
void getdata(int,int);
void putdata();
void sum(pass_obj,pass_obj);
};
void pass_obj::getdata(int x , int y)
{
h=x;
m=y;
}

void pass_obj::putdata(){
cout<<"The Hours Are "<<h<<"\n";
cout<<"The Minutes are "<<m<<"\n";
}

void pass_obj :: sum(pass_obj p1, pass_obj p2)
{
m=p1.m+p2.m;
h=m/60;
m=m % 60;
h=h+p1.h+p2.h;
}

int main()
{

pass_obj p1,p2,p3;
cout<<"Garbage values"<<endl;
p1.putdata();
cout<<"Object p1"<<endl;
p1.getdata(20,70);
p1.putdata();

p2.getdata(30,90);
p3.sum(p1,p2);
cout<<"Object p3"<<endl;
p3.putdata();
cout<<"Object p2"<<endl;
p2.putdata();
p2.sum(p1,p3);
cout<<"Object p2"<<endl;
p2.putdata();

getch();
return 0;
}
