//Write a program to find the sum of even and odd digits seperately in a number

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iCnt=0,evenSum=0,oddSum=0,digit=0;
        while(num>0)
        {
            digit=num%10;
            if(digit%2==0)
            {
                evenSum=evenSum+digit;
            }
            else
            {
                oddSum=oddSum+digit;
            }
                num=num/10;
        }
    System.out.println("Sum of even number is:"+evenSum);
    System.out.println("Sum of odd number is:"+oddSum);
    }
}

class program09
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.sumEvenOddDigits(123456);

    }
    
}