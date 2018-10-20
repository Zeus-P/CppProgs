#include<iostream>
#include<stdio.h>
#include<vector>

int* knapSack(int*, int*, int, int);

using namespace std;
int main(){
    int vp[10];

    int vw[10];
    int n;
    cout<<"Enter No. of Items Do you have : ";

    cin>>n;
    int itemNo = 1;
    for(int i = 0;i < n;i++){
    cout<<"Enter Profit and Weight for For Item No "<<itemNo++<<endl;
    cin>>vp[i];
    cin>>vw[i];

    }
    int capacity;
    cout<<"Enter Capacity of Knapsack";
    cin>>capacity;
    int *XY=new int(n);
   XY = knapSack(vp,vw,capacity,n);

   int t=0;
   for(int i=0; i<=n; i++)
   {
       t+=(vp[i]*XY[i]);
   }

   cout<<"\n\nRESUlT:" <<t;


}
int* knapSack(int* vp, int* vw,int capacity,int n){
float arrayDec[n];
int X[9];
    for(int i = 0;i<n;i++){
            arrayDec[i] = (vp[i]/vw[i]);

        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
            if(arrayDec[i] < arrayDec[j]){
                float t = arrayDec[i];
                arrayDec[i] = arrayDec[j];
                arrayDec[j] = t;
            }
        }
    }
    /*for(int i = 0;i<n;i++){
        cout<<arrayDec[i]<<" ";
    }*/

    int u = capacity, i=0;
    for(i = 0;i<n;i++){
        if(vw[i] <= u){
            X[i] = 0;
            u = u - vw[i];
        }
        else
            break;

    }
    if(i<=n)
        X[i] = u/vw[i];
    }
    return X;
}
