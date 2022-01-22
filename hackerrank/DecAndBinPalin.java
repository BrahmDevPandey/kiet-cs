import java.util.*;

public class DecAndBinPalin {

    public static void main(String[] args) {
        String number;
        Scanner sc = new Scanner(System.in);

        number = sc.nextLine();
        if (isDecimalPalindrome(number) && isBinaryPalindrome(number))
            System.out.println("Yes");
        else
            System.out.println("No");
        sc.close();
    }

    static boolean isDecimalPalindrome(String str) {
        if (str.equals(reverse(str)))
            return true;
        else
            return false;
    }

    static boolean isBinaryPalindrome(String str) {
        int num = Integer.parseInt(str);
        String binary = "";

        // finding the binary value of the number
        int temp = num;
        while (temp > 0) {
            binary += temp % 2;
            temp /= 2;
        }
        System.out.println(binary);
        // the actual binary will be the reverse of this string, but it doesn't matter
        // here beacause we are checking for
        // palindrome
        if (binary.equals(reverse(binary)))
            return true;
        else
            return false;
    }

    static String reverse(String str) {
        String rev = "";
        int len = str.length(), i;
        for (i = len - 1; i >= 0; i--)
            rev += str.charAt(i);
        return rev;
    }
}