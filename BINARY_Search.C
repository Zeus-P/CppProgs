#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int binary(int [],int,int);
void main()
{
int *arr;
int i,n,k,in;
char ch;
clrscr();
do {
printf("Enter The Number of elements in the array :\n");
scanf("%d",&n);
arr=(int*)malloc(sizeof(int));
printf("\nEnter The %d elements of the array in sorted format :\n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter The Element to be searched :\n");
scanf("%d",&k);
in=binary(arr,n,k);
if(in==-999)
printf("\nElement %d is not present in array arr[%d]",k,n);
else
printf("\nelment %d is stored at index location %d in the array arr[%d]",k,in,n);
printf("\n\nDo you wanna more to search ?(Y/N)\n");
ch=getch();
}while(ch=='y'||ch=='Y');
getch();
}

int binary(int array[],int size,int num)
{
int i=0,j=size,k;
while(i<=j)
{
k=(i+j)/2;
if(array[k]==num)
return(k);
else if(array[k]<num)
i=k+1;
else
j=k-1;
}
return(-999);
}