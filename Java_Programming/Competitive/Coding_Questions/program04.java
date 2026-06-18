//Write a program to find the minimum of three numbers.

class Logic
{
    int findMin(int a,int b,int c)
    {
        if((a<b) && (a<c))
        {
            return a;
        }
        else if((b<c) && (b<a))
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

class program04
{
 public static void main(String[] args)
 {
        int iRet=0;
        Logic obj=new Logic();
        iRet=obj.findMin(3,7,2);
        System.out.println("Minimum number is:"+iRet);   
    } 
}
