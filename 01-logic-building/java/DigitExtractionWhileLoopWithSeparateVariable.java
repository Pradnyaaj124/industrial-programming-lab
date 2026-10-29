class DigitExtractionWhileLoopWithSeparateVariable
{
    public static void main(String A[])
    {
        Digit digit = new Digit();
        digit.displayDigits();
    }
}

class Digit
{
    public void displayDigits()
    {
        int iNo = 9752;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;  
            iNo = iNo / 10;                  
            System.out.println(iDigit);  
        }
        

    }
}