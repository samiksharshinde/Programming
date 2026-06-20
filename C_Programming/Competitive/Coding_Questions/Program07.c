#include<stdio.h>

//Accept one number from user and print that number of * on screen

#include<stdio.h>

//Accept one number from user and print that number of * on screen

void Display(int iNo)
{
    int iCnt=0;
    //wriet Updater
    while(iNo>iCnt)
    {
        printf("*");
        iNo--;

    }

}
int main()
{
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}