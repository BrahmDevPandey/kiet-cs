// program to count vowels in a string in java

import java.util.*;

public class CountVowels {

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        System.out.println("Position: " + findPosition(n));
    }

    public static int findPosition(int input) {
        if (input == 0)
            return 1;
        else if (input == 1)
            return 2;

        int pos = 4, a = 1, b = 1, c = a + b;
        while (c <= input) {
            if (input == c)
                return pos;

            a = b;
            b = c;
            c = a + b;
            pos++;
        }
        return -1;
    }
}