//Accept N numbers from user and display all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>

int Digits(int Arr[],int iLength)
{

    int iCnt=0;
    printf("Numbers containing 3 numbers:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<0)
        {
            Arr[iCnt]=-Arr[iCnt];
        }
        if((Arr[iCnt]>=100) && (Arr[iCnt]<=999))
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    Digits(p,iSize);


    free(p);
    return 0;

}