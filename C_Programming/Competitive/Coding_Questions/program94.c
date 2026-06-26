/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=4 iCol=5
OUTPUT: 4 4 4 4 4
        3 3 3 3 3
        2 2 2 2 2
        1 1 1 1 1
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
        int i=0,j=0;
        char ch='A';
        for(i=iRow;i>0;i--)
        {
                for(j=1;j<=iCol;j++)
                {
                    printf("%d\t",i);
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