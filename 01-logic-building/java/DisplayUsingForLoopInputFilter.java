import java.util.Scanner;
class DisplayUsingForLoopInputFilter
{   
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;

        Iteration iteration = new Iteration();

        System.out.println("Enter frequency : ");
        iValue = scanner.nextInt();

        iteration.display(iValue);
    }
}
class Iteration
{
    public void display(int iNo)
    {
        int iCnt = 0;

        //Input Filter
        if(iNo <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }
        for( iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    } 
}