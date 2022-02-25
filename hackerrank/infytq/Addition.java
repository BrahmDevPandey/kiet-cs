import java.util.Scanner;

public class Addition {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = (a * a - b * b) / (a - b);
        System.out.println((a * a - b * b));
        System.out.println((a - b));
        System.out.println(c);
    }
}
