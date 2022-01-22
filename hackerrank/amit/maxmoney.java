import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        int houses, amount, total = 0;
        Scanner sc = new Scanner(System.in);
        houses = sc.nextInt();
        amount = sc.nextInt();
        for (int i = 1; i <= houses; i += 2)
            total += amount;
        System.out.println(total);
    }
}