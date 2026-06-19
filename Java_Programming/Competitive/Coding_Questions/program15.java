//write a program to calculate the power of anumber using loops

class Logic
{
    void calculatePower(int base,int exp)
    {
        int iCnt=0,result=1;
        for(iCnt=1;iCnt<=exp;iCnt++)
        {
            result=result*base;
        }
        System.out.println(result);
    }
}

class program15
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.calculatePower(2,5);
    }
}