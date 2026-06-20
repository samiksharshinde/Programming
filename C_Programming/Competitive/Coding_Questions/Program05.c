#include<stdio.h>

//Accept one number from user and print that umber of * on screen.

void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;
}