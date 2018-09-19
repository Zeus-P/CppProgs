#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter values of a and b";
cin>>a>>b;


//handling Exception here !
int y = (a-b);
try{
    if(y!= 0){
        cout<<"Result is "<<(a/(a-b));
    }
    else
        throw(y);
}
catch(int a){
cout<<"Exception:Division By Zero";
}
return 0;
}
