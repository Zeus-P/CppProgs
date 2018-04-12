#include<iostream.h>
#include<conio.h>
float first, second, final;
void main(){
float sum(float,float);
float(*ptr)(float,float);
float average(float(*)(float,float),float,float);
cout<<"Enter Two Numbers ";
cin>>first>>second;
ptr=&sum;
final=average(ptr,first,second);
cout<<"Average= "<<final;
getch();
}
float sum(float a,float b)
{
return(a+b);
}
float average(float (*ptr)(float,float),float x,float y)
{
float temp;
temp=((*ptr)(first,second)+x/y)/4;
return(temp);
}
