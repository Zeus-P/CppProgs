#include<iostream>
using namespace std;
void test(int x){
    try{
        if(x>0)
            throw x;
        else
            throw 'x';
        }
        catch(int i){
            cout<<"Caught a Integer "<<i<<endl;
            }
        catch(char c){
        cout<<"Caught a character "<<c<<endl;
        }
}
int main(){
    int a;
    char choice;
do{
cout<<"Enter a Number : ";
cin>>a;
test(a);

cout<<"Do You Wanna Check More ? (Y/N) : ";
cin>>choice;
}
while(choice == 'y' || choice == 'Y');
}
