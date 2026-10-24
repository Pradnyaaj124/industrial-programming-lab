//Approach 1

import java.util.Scanner;
class AdditionInlineMain
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

        iResult = iValue1 + iValue2;    //Busines logic

        System.out.println("Addition is :" + iResult);

    }
}