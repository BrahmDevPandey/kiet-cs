import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        int num, temp, dig;
        long sum = 0;

        Scanner sc = new Scanner(System.in);

        num = sc.nextInt();
        temp = num;

        while (temp > 0) {
            dig = temp % 10;
            sum += factorial(dig);
            temp /= 10;
        }

        if (num == sum)
            System.out.println("1");
        else
            System.out.println("0");
    }

    static long factorial(int num) {
        long fact = 1;
        while (num > 0) {
            fact = fact * num;
            num--;
        }
        return fact;
    }
}