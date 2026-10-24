import java.util.Scanner;
class ReadNameWithNullInitialization
{

    public static void main(String[] A) 
    {
        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);
        
        System.out.println("Enter your name : ");
        
        sName = scanner.nextLine();

        System.out.println("Welcome "  + sName);
    }
}