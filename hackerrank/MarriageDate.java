
// find the next date having the same digits
import java.util.*;
import java.io.*;

class MarriageDate {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        while (T-- > 0) {
            String S = sc.nextLine();
            String[] s = S.split(" ");
            String dd = s[0];
            String mm = s[1];
            String yy = s[2];
            Solution ob = new Solution();
            String res = ob.closest_date(dd, mm, yy);
            System.out.println(res);
        }
        sc.close();
    }
}

class Solution {
    public String closest_date(String dd, String mm, String yyyy) {
        // Code here
        String date = dd + " " + mm + " " + yyyy, nextDate;
        int d = Integer.parseInt(dd);
        int m = Integer.parseInt(mm);
        int y = Integer.parseInt(yyyy);
        // boolean flag = true;

        while (true) {
            nextDate = incrementDate(d, m, y);
            if (haveSameChars(date, nextDate))
                return nextDate;
            else {
                String splitted[] = nextDate.split(" ");
                d = Integer.parseInt(splitted[0]);
                m = Integer.parseInt(splitted[1]);
                y = Integer.parseInt(splitted[2]);
            }
        }
    }

    boolean haveSameChars(String date, String nextDate) {
        char arr1[] = date.toCharArray();
        char arr2[] = nextDate.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        return Arrays.equals(arr1, arr2);
    }

    String incrementDate(int d, int m, int y) {
        d++;
        if (d > 30) {
            d = 1;
            m++;
        }
        if (m > 12) {
            m = 1;
            y++;
        }
        return to2digs(d) + " " + to2digs(m) + " " + y;
    }

    String to2digs(int n) {
        if (n < 10)
            return "0" + n;
        else
            return "" + n;
    }
}