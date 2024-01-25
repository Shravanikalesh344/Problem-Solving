#include<stdio.h>

#define PI 3.14

double CircleArea(int fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius  * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius of circle :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f \n",dRet);

    return 0;
}