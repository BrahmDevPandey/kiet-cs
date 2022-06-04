import java.util.Scanner;

public class Taste {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, n, m;
        String binN = "", binM = "";
        t = sc.nextInt();

        while (t-- > 0) {
            n = sc.nextInt();
            binN = toBinary(n);
            m = n + 1;
            while (true) {
                binM = toBinary(m);
                if (count1(binM) == count1(binN)) {
                    System.out.println(m);
                    break;
                }
                m++;
            }
        }
    }

    public static String toBinary(int n) {
        String bin = "";
        while (n > 0) {
            bin += n % 2;
            n /= 2;
        }
        return bin;
    }

    public static int count1(String str) {
        int count = 0, len = str.length();
        for (int i = 0; i < len; i++)
            if (str.charAt(i) == '1')
                count++;
        return count;
    }
}