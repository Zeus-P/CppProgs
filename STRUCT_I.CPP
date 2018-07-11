#include<iostream>
#include<conio.h>
using namespace std;

class test {
typedef struct name {
int a;
}name;
name n;
public :
void input(int x){
n.a=x;
}
void print()
{
cout<<"\n\tValue is "<<n.a;
}

};

int main(){
test A;
A.input(20);
A.print();
getch();
return 0;
}
