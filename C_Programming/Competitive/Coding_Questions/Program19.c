//Write a program which accept number from user and return sumation of its non factors.
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
   
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum=iSum+iCnt;
        }
    }
   
    return iSum;
}
int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}