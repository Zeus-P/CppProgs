#include<iostream>
#include<conio.h>

using namespace std;

class A {
	protected:
	int a;
	public:
		void get_a(int);
		int get_a();
};

void A :: get_a(int x)
{
	a=x;
	cout<<"Value of a is"<<a<<endl;
}

int A :: get_a()
{
	cout<<"value of a is"<<a<<endl;
	return a;

}

class B : public A
{
	int b,c;
public:
	void get_b(int x){
		b=x;
	}
	void add(){
		c = b+a;
	}
	void display(){
		cout<<"Value of a"<<a<<endl;
		cout<<"Value of b"<<b<<endl;
		cout<<"Value of c"<<c<<endl;

	}
};

int main()
{
	class B obj;
	int a,b;
	cout<<"Enter Value for a";
	cin>>a;
	cout<<"Enter value for b";
	cin>>b;
	obj.get_a(a);
	obj.get_b(b);
	obj.add();
	obj.display();
	return 0 ;


}
