//write a program which accept range from user and return addtion of  all even numbers in between that range.
//Range should be positive
#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
    }

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet==-1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}