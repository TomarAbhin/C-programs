#include<stdio.h>
int main()
{
  int radius;
    printf("enter the radius of circle\n");
    scanf("%d",&radius);
    printf("the diameter is %d\n",2*radius);
    printf("the circumference is %f\n",2*3.14*radius);
    printf("the area of circle is %f\n",3.14*radius*radius);
    return 0;
}
