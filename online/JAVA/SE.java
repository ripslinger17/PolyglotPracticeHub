import java.util.Scanner;
public class SE {
    public static void main(String args[])
    {
        Scanner objSC = new Scanner(System.in);
        String str = "Royal-@-gmail.com";
        String str1[] = str.split("-");
        for (int i=0; i < str1.length; i++) {
            System.out.println(str1[i] + "==" + str1[i].length());
        }
    }
}
