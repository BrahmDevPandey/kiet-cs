import java.util.Scanner;

public class StringRev {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String name, rev = "";
        name = sc.nextLine();

        int len = name.length();
        for (int i = len - 1; i >= 0; i--) {
            rev += name.charAt(i);
        }
        System.out.println("Reversed name is: " + rev);
    }
}