import java.util.Scanner;
class DisplayUsingForLoopDynamicFrequency
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
        for( iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    } 
}