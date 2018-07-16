#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;

class student {
    int roll;
    char name[20];
public:
    void getdata(int x, char *y){
        roll=x;
        strcpy(name,y);

    }
    void putdata(){
    cout<<"\nRoll Number : "<<roll;
    cout<<"\nName        : "<<name;
    }
};

int main(){
    student obj , *p;
    p = &obj;
    char n[20];
    char *d;
    int a;
    cout<<"Enter Your Roll No. ";
    cin>>a;
    cout<<"Enter Your name : ";
    cin>>n;
    cout<<d;
    p->getdata(a,n);
    p->putdata();
    return 0;
}
