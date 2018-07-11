#include<iostream.h>
#include<stdio.h>
#include<conio.h>


class student {
typedef struct data {
	int roll;
	char stuname[30];
	char subname[5][10];
	char branch[10];
	int marks[5];
}data;
data ds;
char grade;

public:
void calculate();
void display();
void inputdata(){
cout<<"Roll No. ";
cin>>ds.roll;
cout<<"\nStudent\'s Name : ";
gets(ds.stuname);
cout<<"\nBranch : ";
gets(ds.branch);
cout<<"\nEnter Subjects Opted By Student\n";
for(int i=0;i<5;i++){
cout<<(i+1)<<".Subject : ";
gets(ds.subname[i]);
flush;
cout<<"\tMarks : ";
cin>>ds.marks[i];
}
}
};

void student :: display() {
cout<<"\n\tRoll No. "<<ds.roll;
cout<<"\n\tStudent\'s Name : ";
puts(ds.stuname);
cout<<"\tBranch : ";
puts(ds.branch);
cout<<"\t\t****Score Card****\n";
for(int i= 0;i<5;i++)
{
cout<<"\n\t\t"<<(i+1)<<".Subject : ";
cout<<ds.subname[i];
cout<<"\tMarks : ";
cout<<ds.marks[i];
}
cout<<"\n\nGrade: "<<grade<<endl;
}

void student :: calculate()
{
int i,sum=0;
float avg;
for(i=0;i<5;i++)
sum += ds.marks[i];
avg=sum/5;
if(avg > 75)
grade = 'H';
else if(avg > 65)
grade='G';
else if(avg > 50)
grade='A';
else
grade='F';
}

int main() {

student X[2];
int i;
clrscr();
for(i=0;i<2;i++)
{
cout<<"Enter "<<(i+1)<<"th Student's Data\n"<<endl;
X[i].inputdata();
X[i].calculate();
cout<<"\n";
}
clrscr();
for(i=0;i<2;i++){
X[i].display();
cout<<"---------------------------------------------------------------------";
}
getch();
return 0;
}
