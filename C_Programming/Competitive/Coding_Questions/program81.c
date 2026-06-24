/*Accept number from user and display below pattern.
Input:  5
OutPut: A B C D E
*/

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c",ch);
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}