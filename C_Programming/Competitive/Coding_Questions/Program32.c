//Accept amount in US dollar and return its corresponding value in Indian currency.
//Consider 1$ as 70 rupees.
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iTemp=0;
    iTemp=iNo*70;
    return iTemp;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number of USD:");
    scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("Value in INR is: %d",iRet);
    return 0;
}