import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        String str, newStr = "";
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        str = str.trim().replaceAll(" +", " ");
        System.out.println(str);

    }
}