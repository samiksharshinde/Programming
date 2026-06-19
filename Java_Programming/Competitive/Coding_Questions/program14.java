//write a programto print each digit of a number seperatly.

class Logic
{
    void printDigits(int num)
    {
        int iCnt=0,Digit=0;
        for(iCnt=0;iCnt<num;iCnt++)
        {
             Digit=num%10;
             num=num/10;
            System.out.println(Digit);
        }
       
       
        
        
    }
}

class program14
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.printDigits(9876);
    }
}