import java.util.Scanner;
class ReadNameExplicitScannerImport
{

    public static void main(String[] A) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name : ");
        String sName = scanner.nextLine();

        System.out.println("Welcome "  + sName);
    }
}