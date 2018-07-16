#include<iostream>
#include<conio.h>

using namespace std;

class Base{
int b;
public:
    Base(int x)
    {
        b=x;
        cout<<"Class Base\nb = "<<b<<endl;
    }
    };

class Derived:public Base
{
    int d,c;
public:
    Derived(int x, int y,int z=40):Base(x),d(y),c(z){
    cout<<"Class Derived\nd = "<<d<<" , c = "<<c<<endl;
    }
};

int main()
{
    Derived obj(10,30);
    return 0;
}
