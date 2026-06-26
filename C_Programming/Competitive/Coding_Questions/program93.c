/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=3 iCol=5
OUTPUT: A A A A A
        B B B B B
        C C C C C 
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
        int i=0,j=0;
        char ch='A';
        for(i=1,ch='A';i<=iRow;i++,ch++)
        {
                for(j=1;j<=iCol;j++)
                {
                    printf("%c\t",ch);
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