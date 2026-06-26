/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=4 iCol=4
OUTPUT: A B C D
        A B C D 
        A B C D 
        A B C D
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
        int i=0,j=0;
        char ch='A';
        for(i=1;i<=iRow;i++)
        {
                for(j=1,ch='A';j<=iCol;j++,ch++)
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