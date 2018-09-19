#include<iostream>
#include<conio.h>

using namespace std;
void function(int x,int y){
    cout<<"\nInside Function";
    try{
        if(y==0){
            throw y;
        }
        else
            cout<<"\n\nDivision = "<<(x/y);
    }
    catch(int i){
    cout<<"\nCaught 0  at Y variable ";
    throw;  //Rethrowing

    }
    cout<<"\nEnd Of Function";
}
int main(){
    cout<<"\n\nInside main.";
    try{
    function(10,5);
    function(5,0);
}
catch(int n){
cout<<"\n\nCaught Integer inside main "<<n<<endl;
}
cout<<"End Of Main()";
return 0;
}
