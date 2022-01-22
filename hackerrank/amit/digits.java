import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        String num;
        Scanner sc = new Scanner(System.in);
        num = sc.nextLine();
        int sum = Integer.parseInt(Character.toString(num.charAt(0)))
                + Integer.parseInt(Character.toString(num.charAt(num.length() - 1)));
        System.out.println(sum);
    }
}