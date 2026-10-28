import java.util.Scanner;
class DisplayUsingDoWhileLoop
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

        iCnt = 1;
        
        do
        {
            System.out.println("---------------------");
            System.out.println(iCnt + " Jay Ganesh...");
            System.out.println("---------------------");

            iCnt++;
        }
        while(iCnt <= iNo);
        
    } 
}