#include<iostream>
#include<conio.h>

using namespace std;
class stu {
protected:
	int roll;
public:
	void get_roll(int);
	void put_roll();

};

void stu::get_roll(int x){
	roll=x;

}
void stu::put_roll(){
	cout<<"\n\tRoll No. "<<roll<<endl;

};

class test:public stu {
protected:
	float m1,m2;
public:
	void get_marks(float a,float b){
		m1=a;
		m2=b;
	}
	void put_marks(){
		cout<<"\n\tMarks in subject 1 :"<<m1<<endl;
		cout<<"\n\tMarks in subject 2 :"<<m2<<endl;

	}
};

class result:public test{
	int total;
public:
	void display(){
		total=m1+m2;
		put_roll();
		put_marks();
		cout<<"\n\tYour Total marks are "   <<total<<endl;
	}
};


int main(){
	result obj;
	obj.get_roll(109);
	obj.get_marks(56.4,87.6);
	obj.display();

	return 0;

}
