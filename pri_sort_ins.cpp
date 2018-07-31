#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	ifstream fin;

	int num[100],i=0,ax,j,n=0;

	fin.open("arr1.txt",ios::in);
	if(!fin){
	cout<<"File Could not be opened";
	exit(0);
	}
	while(!fin.eof()){
	fin>>num[i];
	i++;
	n++;
	}
	cout<<"unsorted Array is "<<endl;
	for(i=0;i<n;i++)
        cout<<num[i]<<" ";
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				ax=num[i];
				num[i]=num[j];
				num[j]=ax;
			}
		}
	}
	cout<<"\nThe Sorted array is "<<endl;
	for(i=0;i<n;i++)
        cout<<num[i]<<" ";
}
