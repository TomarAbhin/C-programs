#include<stdio.h>
int main()
{
    float l;
    printf("enter the value of length in cm\n");
    scanf("%f",&l);
    printf("the value of length in m is %f\n",l/100);
    printf("the value of length in km is %f\n",l/100000);
    return 0;
}