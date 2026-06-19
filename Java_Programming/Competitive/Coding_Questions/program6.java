//Write a program to check whether a number is prime or not
class Logic
{
    void checkPrime(int num)
    {
        int iCnt=0;
        for(iCnt=2;iCnt<num;iCnt++)
        {
            if(num%iCnt==0)
            {
                System.out.println("Not a prime number");
                
            }
            
        }

        System.out.println("Prime Number");
    }

}

class program6
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.checkPrime(11);
    }
}