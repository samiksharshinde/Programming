//Write a program to print the multiplication table of a number

class Logic
{
    void printTable(int num)
    {
        int iCnt=0,iResult=0;
        for(iCnt=1;iCnt<=10;iCnt++)
        {
            System.out.println(iCnt*5);
        }
       
    }
}

class program05
{
    public static void main(String args[])
    {
        
        Logic obj=new Logic();
        obj.printTable(5);
    }
}