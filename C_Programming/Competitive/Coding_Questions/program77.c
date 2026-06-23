//Accept N numbers from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}
    

int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter the number of elements:");
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

    iRet=Minimum(p,iSize);
       printf("Smallest Number is %d",iRet);
    
    free(p);
    return 0;
}