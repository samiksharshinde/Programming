//write a program which accept distance in kilometre and convert it into meter(1 kilomter=1000 meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue=0,iRet=0;
    printf("Enter distance:");
    scanf("%d",&iValue);
    iRet=KMtoMeter(iValue);
    printf("%d",iRet);
    return 0;
}