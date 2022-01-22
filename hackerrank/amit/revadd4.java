import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        int num, rev;
        Scanner sc = new Scanner(System.in);

        num = sc.nextInt();
        rev = reverse(num);

        while (num != rev) {
            num = num + rev;
            rev = reverse(num);
        }

        System.out.println(num);
    }

    static int reverse(int num) {
        int dig = 0, rev = 0;
        while (num > 0) {
            dig = num % 10;
            rev = rev * 10 + dig;
            num /= 10;
        }
        return rev;
    }
}