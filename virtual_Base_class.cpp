#include<iostream>
#include<conio.h>

using namespace std;

class A {
int a;
public:
    void dispa()
    {
        a=10;
        cout<<"\nClass A\n"<<a;
    }};
class B : public virtual A{
int b;
public:
    void dispb(){
        b=20;
        cout<<"\nClass B\n"<<b;
    }
};
class C : virtual public A {
    int c;
public:
    void dispc(){
    c=30;
    cout<<"\nClass C\n"<<c;}};
class D :public B,public C{
int d;
public:
    void dispd(){
        d=40;
        cout<<"\nClass D\n"<<d;
    }
};

int main(){
    D obj;
    obj.dispa();
    obj.dispb();
    obj.dispc();
    obj.dispd();
    //if you wanna omit sue of virtual keyword, You could use :
    obj.B :: dispa();
    obj.C :: dispa();
    return 0;
}
