//Write a program to count total number of factors of a given number.

class Logic
{
    void displayFactors(int num)
    {
        int iCnt=0,iFact=0;
        for(iCnt=1;iCnt<=num;iCnt++)
        {
            if(num%iCnt==0)
            {
                iFact++;
                
            }
        }
        System.out.println(iFact);
    }
}

class program24
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.displayFactors(20);
    }
}