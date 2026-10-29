import java.util.*;
class DigitCountWithExtraction
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
        int iDigit = 0;
        int iCount = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;  
            iNo = iNo / 10;                   
            iCount += 1; 
        }
        return iCount;

    }
}