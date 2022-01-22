import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        String input, letters = "";
        Scanner sc = new Scanner(System.in);
        input = sc.nextLine();
        letters += input.charAt(0);
        int len = input.length() - 1;
        for (int i = 1; i < len; i++)
            if (input.charAt(i) == ' ' && input.charAt(i + 1) != ' ')
                letters += input.charAt(i + 1);
        System.out.println(letters);

    }
}