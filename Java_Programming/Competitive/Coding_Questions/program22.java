//Write a program count how many even and odd numbers are present between 1 and N

class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount=0,oddCount=0,iCnt=0;

        for(iCnt=0;iCnt<n;iCnt++)
        {
            if(iCnt%2==0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
        System.out.println("Count of even numbers is:"+evenCount);
        System.out.println("Count of odd numbers is:"+oddCount);

    }
}

class program22
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.countEvenOddRange(50);
    }
}