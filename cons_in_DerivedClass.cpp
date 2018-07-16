#include<iostream>
#include<conio.h>

using namespace std;

class A {
int a;
public:
    A(int x){
    a=x;
    cout<<"\nClass A Constructor initialized\nValue is "<<a<<endl;
    }
    };

class B{
int b;
public:
    B(int x)
    {
        b=x;
        cout<<"Class B Constructor Initialized\nValue is "<<b<<endl;
    }
};

class C:public B,public A{      //B's Constructor would be called first.
int c;
public:
    C(int a,int b,int c):A(a),B(b){
        c=c;
        cout<<"Class C Constructor initialized \nValue is "<<c<<endl;
    }
};

int main()
{
    C obj(10,20,30);
    return 0;
}
