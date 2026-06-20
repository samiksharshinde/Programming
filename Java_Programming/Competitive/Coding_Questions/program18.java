//Write a program to check whether a number is a perfect number or not
//Perfect number:Number which is equal to sum of its divisor
class Logic
{
    void checkPerfect(int num)
    {
        int iCnt=0,iSum=0;
        for(iCnt=1;iCnt<num;iCnt++)
        {
            if(num%iCnt==0)
            {
                
                iSum=iSum+iCnt;
                
            }
        }
        if(iSum==num)
        {
            System.out.println("Number is perfect number");
        }
        else
        {
            System.out.println("Number is not perfect");
        }

    }
}

class program18
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.checkPerfect(6);
    }
}