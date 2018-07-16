#include<iostream>
#include<conio.h>

using namespace std;

class A {
protected:
    int a;
public:
    void get_a(int);
    };

    void A :: get_a(int x){
    a=x;
    }

class B {
protected:
    int b;
public:
    void get_b(int x)
    {
        b=x;
    }
};

class C : public A,public B {
    int c;
public:
    void add();
};
void C :: add(){
c=a+b;
cout<<"sum is "<<c<<endl;
}

int main(){
int a,b;
C obj;
cout<<"Enter Two Numbers : ";
cin>>a>>b;
obj.get_a(a);
obj.get_b(b);
obj.add();
return 0;
}



