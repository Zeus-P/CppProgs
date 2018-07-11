#include<iostream>
#include<conio.h>
using namespace std;

class test {
    int a,b;
public:
    test();
    test(int);
    test(int,int);
    ~test()
{
    cout<<"Object Which has values : ";
    cout<<a<<"  "<<b<<"\nDestroyed\n";
}
};



test::test(){
 cout<<"0 Argument Constructor Invoked\n";
 a=b=0;
 cout<<"a = "<<a<<", b = "<<b<<endl;
}

test::test(int x){
cout<<"1 Argument Constructor Invoked\n";
a=b=x;
cout<<"a = "<<a<<", b = "<<b<<endl;
}

test::test(int x,int y){
cout<<"2 Arguments Constructor Invoked\n";
a=x;
b=y;
cout<<"a = "<<a<<", b = "<<b<<endl;
}

int main(){
test t1;
test t2(70);
test t3(20,30);
}

