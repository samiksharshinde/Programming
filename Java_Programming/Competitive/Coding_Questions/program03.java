//write a program to find the maximum of two numbers.

class Logic

{
    int findMax(int a,int b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }

}

class program03
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        int iRet=obj.findMax(20,15);
        System.out.println("Maximum number is:"+iRet);
    }
}