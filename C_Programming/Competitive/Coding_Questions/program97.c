/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=4 iCol=5
OUTPUT: 2 4 6 8 10
        1 3 5 7 9
        2 4 6 8 10
        1 3 5 7 9
*/


#include<stdio.h>

void pattern(int iRow,int iCol)
{
        int i=0,j=0;
        int iCnt=1;
        for(i=1;i<=iRow;i++)
        {
                for(j=1;j<=iCol;j++)
                {
                        if(i%2!=0)
                        {
                            printf("%d\t",j*2);
                        }
                        else
                        {
                            printf("%d\t",j*2-1);
                        }
                }
                printf("\n");
        }

}

int main()
{
        int iValue1=0,iValue2=0;
        printf("Enter the number of rows:");
        scanf("%d",&iValue1);
        printf("Enter the number of columns:");
        scanf("%d",&iValue2);
        pattern(iValue1,iValue2);
}