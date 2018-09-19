#include<iostream>
using namespace std;

int main(){
char name[20];
cout<<"Enter Your name :";
cin.getline(name,15);
cout<<"\nname : ";
cout.write(name,10);
cout<<"\nName : "<<name;
///getch();
return 0;


}
