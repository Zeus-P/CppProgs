#include<iostream>
#include<conio.h>
using namespace std;
class test {
int a,b,c;
public:
    void getdata(int x,int y,int z);
    void operator -();
    void disp();
    friend test operator *(test,test);

    test operator +(test t){
    test temp;
    temp.a=a+t.a;
    temp.b=b+t.b;
    temp.c=c+t.c;
    return temp;
    }

};
test operator *(test t1,test t2){
    test temp;
    temp.a=t2.a-t1.a;
    temp.b=t2.b-t1.b;
    temp.c=t2.c-t1.c;
    return temp;
}
void test :: getdata(int x,int y,int z){
    a=x;
    b=y;
    c=z;
}
void test :: operator -(){
a=-a;
b=-b;
c=-c;
}
void test ::  disp(){
cout<<"\nvalue of a : "<<a;
cout<<"\nvalue of b : "<<b;
cout<<"\nvalue of c : "<<c;
}

int main(){
test obj;
obj.getdata(1,2,3);
obj.disp();
-obj;//Calling unary operator function
obj.disp();

//Binary operator Overloading

test t1,t2,t3;
t1.getdata(2,4,6);
t2.getdata(3,6,9);
t3=t1+t2; //Calling Binary Operator function
t3.disp();

//Binary operator overloading using friend function

t3=t1*t2;//Calling binary Operator function
t3.disp();

return 0;
}
