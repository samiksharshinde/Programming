//Write a program to check whether a number is positive,negative or zero

class Logic
{
    void checkSign(int num)
    {
        if(num<0)
        {
            System.out.println("Negative number");

        }
        else if(num==0)
        {
            System.out.println("Zero");
        }
        else
        {
            System.out.println("Positive number");
        }

    }
}

class program10
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.checkSign(-8);
    }
}