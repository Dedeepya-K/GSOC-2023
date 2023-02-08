#include<stdio.h>
#include<conio.h>
void main()
{
    int np,sum=0,totaltat=0,i,j,k;
    int at[10]={0},bt[10]={0},ct[10]={0},wt[10]={0},tat[10]={0};
    float AvgWt = 0.0,totWt=0;

    printf("Enter the number of processes to be running \n");
    scanf("%d",&np);

    printf("Enter all the processes arrival time, burst time\n");
    for(i = 1;i<=np;i++)
    {
        printf("Enter the arrival time of process [%d] = ", i);
        scanf("%d", &at[i]);

        printf("Enter the burst time of process [%d] = ", i);
        scanf("%d", &bt[i]);
    }//for loop close
    // now calculation of completion time

    for(j=1;j<=np;j++)
    {
        sum = sum+bt[j];
        ct[j]=ct[j]+sum;
    }
    //now calculation of turn around time
    for(k=1;k<=np;k++)
    {
        tat[k]=ct[k]-at[k];
        //totaltat = totaltat+tat[k];
    }
    //now calculation of waiting times
    for(k=1;k<=np;k++)
    {
        wt[k]=tat[k]-bt[k];
        totWt = totWt+wt[k];
    }
    //now display results
    AvgWt = totWt/np;
    printf("Process #\tat\tbt\tct\ttat\twt\n");

    for(i=1;i<=np;i++)
    {

        printf("Process[%d]\t%d\t%d\t%d\t%d\t%d\n", i, at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("\nAverage waiting time is = %f",AvgWt);

}//main close

