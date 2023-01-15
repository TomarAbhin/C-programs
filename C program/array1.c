#include<stdio.h>
int main()
{
    int marks[5],sum=0,avg;
    for(int i=0;i<=4;i++)
    {
        printf("enter the marks\n");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=4;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("The sum is:%d\nThe average is:%d",sum,avg);
    return 0;
}