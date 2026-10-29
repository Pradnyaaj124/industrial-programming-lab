import java.util.*;
class DigitExtractionScannerInput
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        digit.displayDigits(iValue);
    }
}

class Digit
{
    public void displayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;  
            iNo = iNo / 10;                  
            System.out.println(iDigit);  
        }
        

    }
}