//Write a program to find factorial of given number.

#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt=0;
    int Fact=1;
    if(iNo < 0)
    {
        return -1;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        Fact=Fact*iCnt;
    }
    return Fact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of number is :%d",iRet);

    return 0;
}