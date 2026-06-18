//Write a program to check whether a number is a palindrome or not

class Logic
{
    void checkPalindrome(int num)
    {
        int iDigit=0;
        int iRev=0;
        int iTemp=num;

        while(num>0)
        {
            iDigit=num%10;
            iRev=(iRev*10)+iDigit;
            num=num/10;
        }

        if(iTemp==iRev)
        {
            System.out.println("The number is a palindrome.");
        }
        else
        {
            System.out.println("The number is not a palindrome.");
        }
    }
}

class program02
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.checkPalindrome(121);
    }
}