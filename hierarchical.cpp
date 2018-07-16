#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

class A {
    protected:
int a;
public:
    void get_a()
    {
        cout<<"Enter a Number : ";
        cin>>a;

    }
};

class B : public A {
public:
    void squ(){
    get_a();
    cout<<"Square is "<<a*a;
    }
};

class C : public A{
public:
    void cube()
    {
    get_a();
    cout<<"Cube is "<<a*a*a;
    }
};

int main(){
B ob;
C oc;
char ch;
int n;
do{
cout<<"\n\t1.Square\n\t2.Cube\n\tEnter Your Choice : ";
cin>>n;
switch(n)
{
    case 1:ob.squ();
    break;
    case 2:oc.cube();
    break;
    default:cout<<"Enter Valid Input !";


}
cout<<"\nWanna Check More ?(Y/N)\n";
cin>>ch;
}while(ch=='y' || ch=='Y');
}
