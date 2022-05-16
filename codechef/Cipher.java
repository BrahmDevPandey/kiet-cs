/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Cipher {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        int tests, n, arr[];
        String t = "", s = "";
        Scanner sc = new Scanner(System.in);
        tests = sc.nextInt();

        while (tests-- > 0) {
            // reading all the inputs
            n = sc.nextInt();
            t = sc.nextLine();
            s = ""; // initialize with empty string
            arr = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = sc.nextInt();

            // decrypting the message using cyclic rotation
            int k, ch;

            for (int i = 0; i < n; i++) {
                k = arr[i];
                k %= 26;
                ch = t.charAt(i);
                ch += k; // increase ch
                if (ch > 122) // cyclic rotation of ch
                    ch = ch % 123 + 97;
                s += (char) ch; // append updated ch to s
            }

            // print the final string
            System.out.println(s);
        }
    }
}
