#include<stdio.h>
void swap(int a[],int b[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    printf("Array after swap\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        printf("%d",b[i]);
    }
}
int main()
{
    printf("Enter the size of an array:");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of 2nd array:");
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    swap(a,b,n,m);
}
