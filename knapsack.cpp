#include<iostream>
#include<stdio.h>
#include<vector>

vector<int> knapSack(vector<int>, vector<int>, int, int);

using namespace std;
int main(){
    vector<int> vp(10,0);

    vector<int> vw(10,0);
    int n;
    cout<<"Enter No. of Items Do you have : ";

    cin>>n;
    int itemNo = 0;
    for(int i = 0;i < n;i++){
    cout<<"Enter Profit and Weight for For Item No "<<itemNo++<<endl;
    cin>>vp[i];
    cin>>vw[i];

    }
    int capacity;
    cout<<"Enter Capacity of Knapsack";
    cin>>capacity;
    int XY[n];
   XY = knapSack(vp,vw,capacity,n);


}
vector<int> knapSack(vector<int> vp,vector<int> vw,int capacity,int n){
float arrayDec[n];
vector<int> X(n,0);
    for(int i = 0;i<n;i++){
            arrayDec[i] = (vp[i]/vw[i]);

        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
            if(arrayDec[i] < arrayDec[j]){
                int t = arrayDec[i];
                arrayDec[i] = arrayDec[j];
                arrayDec[j] = t;
            }
        }
    }
    /*for(int i = 0;i<n;i++){
        cout<<arrayDec[i]<<" ";
    }*/

    int u = capacity;
    for(int i = 0;i<n;i++){
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
