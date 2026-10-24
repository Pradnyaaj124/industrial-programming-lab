//Approach 3

import java.util.Scanner;

class AdditionCapitalizedArithmeticClass
{

    public static void main(String[] A) 
    {
        Scanner scanner = null;
        int iValue1 = 0;
        int iValue2 = 0 , iResult = 0;

        scanner = new Scanner(System.in);

        System.out.println("Enter first no: ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second value");
        iValue2 = scanner.nextInt();

        iResult = Arithmetic.addition(iValue1 , iValue2);

        System.out.println("Addition is :" + iResult);

    }
}

class Arithmetic
{
    public static int addition(int iNo1 , int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}