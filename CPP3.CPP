#include<iostream.h>
#include<conio.h>
class test{
int n;
static int count;
public:
void putdata(int x);
void display();
};
void test::putdata(int x){
n=x;
count++;
}
void test::display(){
cout<<"\tn is "<<n<<" Count is "<<count<<endl;
}
int test::count;
int main(){
clrscr();
test t1,t2,t3;
t1.putdata(10);
t2.putdata(20);
t3.putdata(30);
t1.display();
t2.display();
t3.display();
getch();

return 0;

}