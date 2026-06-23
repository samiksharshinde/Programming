//Accept N numbers from user and display summation of digits of each number.
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int Arr[],int iLength)
{

    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("Sum of digits of %d is %d\n", Arr[iCnt], iSum);
    }



}


int main()
{
    int iSize=0,iRet=0,iValue=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements:");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DigitSum(p,iSize);
    


    free(p);
    return 0;

}