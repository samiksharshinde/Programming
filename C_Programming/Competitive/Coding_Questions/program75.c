//Accept N number from user and return product of all odd elements.


#include<stdio.h>
#include<stdlib.h>

int product(int Arr[],int iLength)
{
    int iCnt=0,iproduct =0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            iproduct=Arr[iCnt]*iproduct;
        }
    }
    return iproduct;

}

int main()
{
    int iCnt=0,iSize=0,iRet=0;
    int *p=NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);
    

    p=(int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements:");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       
        scanf("%d",&p[iCnt]);
    }

    iRet=product(p,iSize);
    printf("Product of odd elements is: %d\n",iRet);
    free(p);
    return 0;

    
}