import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        int num, times;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        times = sc.nextInt();
        num = num / (int) Math.pow(2, times - 1);
        System.out.println(num);
    }
}