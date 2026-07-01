/*Accept number of rows and numbers of columns from user and display below pattern
INPUT: iRow=4 iCol=4
OUTPUT: 1 2 3 4 
          2 3 4
            3 4
              4

*/

#include<stdio.h>

void pattern(int iRow,int iCol)

{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>j)
            {
                 printf(" \t");
            }
            else
            {
                printf("%d\t",j);
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