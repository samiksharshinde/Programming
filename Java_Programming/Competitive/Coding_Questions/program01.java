//Write a program to find the sum of digits of a number.

class Logic
{
    void SumOfDigits(int num)
    {
        int iCnt=0;
        for(iCnt=0;iCnt<num;iCnt++)
        {
            int iDigit=0;
            int iSum=0;
            while(num>0)
            {
                iDigit=num%10;
                iSum=iSum+iDigit;
                num=num/10;
            }
            System.out.println("Sum of digits: " + iSum);
        }
        }

    }


class program01
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.SumOfDigits(1234);
    }
}