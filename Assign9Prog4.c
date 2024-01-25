#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dTempRet = 0.0;

    dTempRet = (fTemp - 32) * (5.0/9.0);

    return dTempRet;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temprature in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Celcius is %f",dRet);

    return 0;   
}

