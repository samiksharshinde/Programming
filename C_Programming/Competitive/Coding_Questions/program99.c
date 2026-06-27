/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=5 iCol=5
OUTPUT: 1 2 3 4 5
        -1 -2 -3 -4 -5
        1 2 3 4 5
        -1 -2 -3 -4 -5
        1 2 3 4 5

*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
        int i=0,j=0;
        
        for(i=1;i<=iRow;i++)
        {
                for(j=1;j<=iCol;j++)
                {
                        if(i%2!=0)
                        {
                            printf("%d\t",j);
                        }
                        else
                        {
                            printf("%d\t",-j);
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