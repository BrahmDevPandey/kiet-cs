import java.util.*;

public class Days {
    public static void main(String[] args) {
        int days, start;
        Scanner sc = new Scanner(System.in);
        days = sc.nextInt();
        start = sc.nextInt();
        int count[] = new int[7];

        // initializing the array with 0s
        for (int i = 0; i < 7; i++)
            count[i] = 0;

        // counting the frequency of each day
        for (int i = 1; i <= days; i++) {
            count[start - 1]++;
            start++;
            if (start > 7)
                start = 1;
        }

        // printing the frequencies
        for (int i = 0; i < 7; i++)
            System.out.print(count[i] + " ");
        sc.close();
    }
}