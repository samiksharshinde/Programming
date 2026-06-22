//write a program which accept range from user and return addition of all numbers in between that range.
#include<stdio.h>

void RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart>iEnd)
    {
        printf("Invalid range");

    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
       
    }
    
     printf("%d",iSum);
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);
    return 0;

}