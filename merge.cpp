#include<iostream>
#include<fstream>

using namespace std;
void merge(int [],int ,int q,int r);
int* mergeSort(int*,int,int);
int main(){
	ofstream file1;
	file1.open("MergeSort.txt");
	int arr[2000];
	cout<<"How Many Numbers Do you have ?"<<endl;
	int n;
	cin>>n;
	cout<<"Enter Your Values \n";
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	for(int i=0;i<n;i++)
	file1<<arr[i]<<"\n";
	file1.close();
	ifstream file2;
	file2.open("MergeSort.txt", ios::in);
	int x;
	file2>>x;
	int i = 0;
	while(!file2.eof()){
		arr[i]=x;
		file2>>x;
		i++;
	
	}
	cout<<"You Entered : ";
	
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nMerge Sort\n";
	int *a;
	a=mergeSort(arr,0,n-1);
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
int* mergeSort(int *arr1,int p,int r)
{
	if(p<r){
	
	int q;
	q=(p+r)/2;
	mergeSort(arr1,p,q);
	mergeSort(arr1,q+1,r);
	merge(arr1,p,q,r);
	return arr1;
	}
	
	
}
void merge(int A[], int p, int q, int r)
{
    /* Create L ? A[p..q] and M ? A[q+1..r] */
    int n1 = q - p + 1;
    int n2 =  r - q;
 
    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = A[q + 1 + j];
    
    /* Maintain current index of sub-arrays and main array */
    int i, j, k;
    i = 0; 
    j = 0; 
    k = p; 


    /* Until we reach either end of either L or M, pick larger among elements L and M and place them in the correct position at A[p..r] */
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = M[j];
            j++;
        }
        k++;
    }
 
    /* When we run out of elements in either L or M, pick up the remaining elements and put in A[p..r] */
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        A[k] = M[j];
        j++;
        k++;
    }
}
