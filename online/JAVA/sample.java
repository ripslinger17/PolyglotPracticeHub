public class sample {
    static {
        System.out.println("This is static block");
    }
    {
        System.out.println("this is instance block");
    }

    sample() {
        System.out.println("this is default block");
    }

    public static void main(String args[]) {
        System.out.println("This is the main");
        sample obj = new sample();
        System.out.println("This is the end of main");
    }
}
