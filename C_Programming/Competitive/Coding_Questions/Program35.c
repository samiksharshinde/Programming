//Write a program to find difference between Even factorial and odd factorial of given number
#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iFact1=1;
    int iFact2=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
             iFact1=iFact1*iCnt;
        }
        else
        {
            iFact2=iFact2*iCnt;
        }
        
    }
    return iFact2-iFact1;
    

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf("Odd factorial of number is: %d",iRet);
    return 0;
}