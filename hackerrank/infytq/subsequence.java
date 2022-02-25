import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class subsequence {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }

        int count = zeroSubsequences(list);
        System.out.println(count);
    }

    public static int zeroSubsequences(List<Integer> arr) {
        int count = 0, len = arr.size(), incr = 1;

        for (int i = 0; i < len; i++) {
            for (incr = 1; i + incr < len; incr++)
                for (int j = i; j < len; j += incr) {
                    if (findMaxMinProd(arr, i, j) == 0)
                        count++;
                }
        }
        return count;
    }

    public static int findMaxMinProd(List<Integer> arr, int start, int end) {
        int max, min, num;
        max = min = arr.get(start);

        for (int i = start; i <= end; i++) {
            num = arr.get(i);
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
        return min * max;
    }
}