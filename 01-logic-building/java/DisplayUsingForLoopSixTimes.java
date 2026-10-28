class DisplayUsingForLoopSixTimes
{   
    public static void main(String A[])
    {
        Iteration iteration = new Iteration();
        iteration.display();
    }
}
class Iteration
{
    public void display()
    {
        int iCnt = 0;
        for( iCnt = 1; iCnt <= 6; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    } 
}