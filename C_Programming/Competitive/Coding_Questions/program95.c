/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=3 iCol=4
OUTPUT: 1 2 3 4
        5 6 7 8
        9 10 11 12
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
                        printf("%d\t",iCnt);
                        iCnt++;
                           
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