import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        int count = 0, len = str.length();
        for (int i = 0; i < len; i++)
            if (str.charAt(i) == ' ')
                count++;
        System.out.println(count + 1);
    }
}