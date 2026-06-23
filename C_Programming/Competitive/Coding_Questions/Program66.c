//Accept N numbers from user and return frequency of even numbers
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int iCnt=0;
    int Count=0;
    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iCnt%2==0)
        {
            Count++;
        }
    }
    return Count;

}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;
    
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=CountEven(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;

}