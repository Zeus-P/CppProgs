#include<iostream>
#include<conio.h>

using namespace std;

class student {
protected:
int roll;
public:
    void get_roll()
    {
        cout<<"Enter Your Roll No. ";
        cin>>roll;

    }

};


class test : public student{
protected:
float m1,m2;
public:
    void marks(){
    cout<<"Enter Marks In Subject 1 : ";
    cin>>m1;
    cout<<"Enter Marks In Subject 2 : ";
    cin>>m2;
    }
};

class sport {
protected:
    float sp;
    void sp_marks(){
    cout<<"Enter Sports Marks : ";
    cin>>sp;
    }
};

class result : public test , public sport{
float total;
public:
    void get_e(){
    get_roll();
    marks();
    sp_marks();
    }
    void disp(){
        total=m1+m2+sp;
    cout<<"-----------------------------------------------------\n";
    cout<<"\n\t\
    Your Roll No. is "<<roll<<endl;
    cout<<"Marks In subject 1 : "<<m1<<endl;
    cout<<"Marks In subject 2 : "<<m2<<endl;
    cout<<"Marks In Sports    : "<<sp<<endl;
    cout<<"\n\nYour Total is "<<total<<endl;
    }

};

int main(){
result obj;
obj.get_e();
obj.disp();
return 0;
}
