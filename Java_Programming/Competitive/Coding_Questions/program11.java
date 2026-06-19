//Write a program to check whether a given year is a leap year or not

class Logic
{
    void checkLeapYear(int year)
    {
        if(year%4==0 && year%100!=0 || year%400==0)
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not a Leap Year");
        }
        
        
    }
}

class program11
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.checkLeapYear(2024);
    }
}