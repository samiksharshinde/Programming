//Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iSumEven=0,iSumOdd=0,iDiff=0;
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
          if(Arr[iCnt]%2==0)
          {
              iSumEven+=Arr[iCnt];
          }
          else
          {
              iSumOdd+=Arr[iCnt];
          }
    }
    iDiff=iSumEven-iSumOdd;
    return iDiff;
}

int main()
{
     int iSize=0,iCnt=0,iRet=0;
     int *ptr=NULL;
     
     printf("Enter number of elements:");
     scanf("%d",&iSize);
     
     ptr=(int*)malloc(iSize*sizeof(int));
     
     if(ptr==NULL)
     {
          printf("Unable to allocate memory");
          return -1;
     }
     
     printf("Enter %d elements:",iSize);
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
          scanf("%d",&ptr[iCnt]);
     }
     
     iRet=Difference(ptr,iSize);
     printf("Difference between summation of even and odd elements is:%d",iRet);
     
     free(ptr);
     return 0;
}