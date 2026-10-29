import java.util.*;
class DigitSumInlineExpression
{
    public static void main(String A[])
    {
        int iRet = 0;
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        iRet = digit.sumDigits(iValue);
        System.out.println("Summation of digits : " + iRet);
    }
}

class Digit
{
    public int sumDigits(int iNo)
    {
        int iSum = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        { 
            iSum = iSum + (iNo % 10); 
            iNo = iNo / 10;                   
        }
        return iSum;

    }
}