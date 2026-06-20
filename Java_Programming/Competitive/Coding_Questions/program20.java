//Write a program to find the smallest digit in a given number.

class Logic
{
    void findSmallestDigit(int num)
    {
        int iMin=9,iDigit=0;
        while(num>0)
        {
            iDigit=num%10;
            if(iDigit<iMin)
            {
                iMin=iDigit;
            }
            num=num/10;
        }

        System.out.println(iMin);
    }
}

class program20
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.findSmallestDigit(45872);
    }
}