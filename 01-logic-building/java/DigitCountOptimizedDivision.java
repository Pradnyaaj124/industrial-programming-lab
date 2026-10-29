import java.util.*;
class DigitCountOptimizedDivision
{
    public static void main(String A[])
    {
        int iRet = 0;
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        iRet = digit.countDigits(iValue);
        System.out.println("Count is : " + iRet);
    }
}

class Digit
{
    public int countDigits(int iNo)
    {
        int iCount = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {  
            iNo = iNo / 10;                   
            iCount ++; 
        }
        return iCount;

    }
}