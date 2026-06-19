//Write a program to print all odd number up to N

class Logic
{
    void printOdd(int num)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=num;iCnt++)
        {
            if(iCnt%2!=0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program08
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.printOdd(20);
    }
}