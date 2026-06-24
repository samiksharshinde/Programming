/*Accept number of rows and number of columns from user and display below pattern
Input: iRow=3 iCol=5
Output: 5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
        
*/
#include<stdio.h>
void pattern(int iRow,int iCols)
{
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
                for(j=iCols;j>0;j--)
                {
                        printf("%d\t",j);
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