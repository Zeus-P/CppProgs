#include<stdio.h>
void main()
{
int n,i;
float p[20],a[20],b[20],tat[20],wt[20],tar=0,pri=0,av_tat,av_wt;
printf("Enter Number of processes := ");
scanf("%d",&n);
printf("Enter Arrival time For %d Processes\n",n);
for(i=0;i<n;i++)
scanf("%f",&a[i]);
printf("Enter Execution Time For %d Processes\n",n);
for(i=0;i<n;i++)
scanf("%f",&b[i]);
p[0]=0;
for(i=0;i<n;i++)
p[i+1]=p[i]+b[i];

for(i=0;i<n;i++)
{
tat[i]=p[i+1]-a[i];
wt[i]=tat[i]-b[i];
tar+=tat[i];
pri+=wt[i];
}
av_tat=tar/n;
av_wt=pri/n;
printf("  Process  |       Arr. Time        |       Ex. Time         |            TAT         |      Waiting Time \n");
for(i=0;i<n;i++){
printf("   P[%d]    |       %f         |        %f        |       %f          |         %f        ",i+1,a[i],b[i],tat[i],wt[i]);
printf("\n");
}
printf("\nThe Average Turn Around Time is %f \n",av_tat);
printf("The Average Waiting Time is %f \n",av_wt);
printf("\n");

}
