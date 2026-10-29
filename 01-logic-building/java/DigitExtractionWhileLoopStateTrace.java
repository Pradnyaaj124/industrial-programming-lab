class DigitExtractionWhileLoopStateTrace
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
        int iNo = 175902;

        while(iNo != 0)
        {
            System.out.println("Digit is : " + (iNo % 10 ));  
            iNo = iNo / 10;                  
            System.out.println("Number is : " + iNo);  
        }
        

    }
}