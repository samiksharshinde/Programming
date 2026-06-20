//Write a program to display all factor of a given number.

class Logic
{
    void displayFactors(int num)
    {
        int iCnt=0,iFact=0;
        for(iCnt=1;iCnt<=num;iCnt++)
        {
            if(num%iCnt==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program23
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.displayFactors(12);
    }
}