import java.util.Scanner;
public class StringExample
{
    public static void main(String srgs[])
    {
        Scanner objSC = new Scanner(System.in);
        String str = "ROyal";
        String str1 = new String("ROYAL");
        String str2;
        System.out.println("Enter the string");
        str2 = objSC.next();
        System.out.println(str);
        System.out.println(str1);
        System.out.println(str2);
    }
}