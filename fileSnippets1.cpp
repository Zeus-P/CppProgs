#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std;

int main(){
ofstream fin;
fin.open("1,txt");
//fin.open("2.txt");
int a;
cin>>a;
fin<<a;
}
