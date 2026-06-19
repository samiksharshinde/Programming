//Write a program to diaplay the grade of a student based on marks.

class Logic
{
    void displayGrade(int marks)
    {
        if(marks>90)
        {
            System.out.println("O grade");
        }
        else if(marks>80 && marks<90)
        {
            System.out.println("A grade");
        }
        else if(marks>70 && marks<80)
        {
            System.out.println("B grade");
        }
        else
        {
            System.out.println("c grade");
        }

    }

}

class program12
{
    public static void main(String args[])
    {
        Logic obj=new Logic();
        obj.displayGrade(82);
    }
}