//write a program which accept temperature in Fahrenheit and convert into celsius.
//(1 celsius=(Fahrenheit-32)*(5/9))


#include<stdio.h>

double FhtoCs(double fTemp)
{
    double dResult = 0.0;

    dResult = (fTemp - 32.0) * 5.0 / 9.0;

    return dResult;
}

int main()
{
    double fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fValue);

    dRet = FhtoCs(fValue);

    printf("%lf", dRet);

    return 0;
}