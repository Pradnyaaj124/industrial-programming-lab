import java.util.*;
class ReadNameUsingScanner
{

    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your name : ");
        String Name = sobj.nextLine();

        System.out.println("Welcome "  + Name);
    }
}