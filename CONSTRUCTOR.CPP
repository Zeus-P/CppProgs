#include<iostream.h>
#include<conio.h>



// Default Constructor

class test {
	int a,b;

	public:
		test() {
			a=b=0;
		}
	void disp()
	{
		cout<<"A = "<<a<<"\n";
		cout<<"B = "<<b<<"\n";
	}
};
class testp {
	int a,b;
	public :
	testp(int x,int y)
	{
		a=x;
		b=y;
	}
	void disp()
	{
		cout<<"A = "<<a<<"\n";
		cout<<"B = "<<b<<"\n";
	}
};

class cons {
public:
int a,b;
public:
 cons(int ,int);
 };

cons :: cons(int x, int y){
a=x;
b=y;
}

void display(cons o){
cout<<"\n"<<o.a;
cout<<"\n"<<o.b;
}

int main()
{                clrscr();
	test A;
	testp B(20,30);
	cons C(37,56);
	A.disp();
	B.disp();
	display(C);

	getch();
	return 0;
}