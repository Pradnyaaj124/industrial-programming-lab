class DigitExtractionParameterizedMethod
{
    public static void main(String A[])
    {
        Digit digit = new Digit();
        digit.displayDigits(9752);
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