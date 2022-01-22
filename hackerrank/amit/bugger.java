import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        int num, prod, temp, count;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        count = 0;
        while (num / 10 > 0) {
            temp = num;
            prod = 1;
            while (temp > 0) {
                prod = prod * (temp % 10);
                temp /= 10;
            }
            count++;
            num = prod;

        }
        System.out.println(count);

    }
}