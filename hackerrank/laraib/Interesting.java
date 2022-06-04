import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class Interesting {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.valueOf(br.readLine());
        List<Integer> list = new ArrayList<Integer>();

        while (t-- > 0) {

            int k = Integer.valueOf(br.readLine());
            int i = 0, j = 2, ans = -1;

            if (k < list.size())
                System.out.println(list.get(k));
            else {
                i = list.size();
                while (i != k) {

                    if (isValid(j)) {

                        i++;
                        ans = j;
                    }
                    j++;
                }
                list.add(ans);
                System.out.println(ans);
            }
        }
    }

    static boolean isValid(int n) {

        String s = String.valueOf(n);
        for (int i = 0; i < s.length(); i++) {

            if (Integer.valueOf(s.substring(i, i + 1)) % 2 != 0)
                return false;
            if (i + 1 < s.length() && Integer.valueOf(s.substring(i + 1, i + 2)) % 2 == 0)
                return false;
        }
        return true;
    }
}