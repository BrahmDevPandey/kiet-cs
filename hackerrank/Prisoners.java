import java.util.Scanner;

public class Prisoners {

    public static void main(String[] args) {
        /*
         * Your class should be named Main.
         * Read input as specified in the question.
         * Print output as specified in the question.
         */

        // Write your code here
        int n, m, p;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        p = sc.nextInt();

        int arr[][] = new int[n][2];
        for (int i = 0; i < n; i++) {
            arr[i][0] = sc.nextInt();
            arr[i][1] = sc.nextInt();
        }

        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i][1] == p) { // if hates channel
                p = arr[i][0]; // change the channel to fav
                i = -1; // again check from the beginning
                moves++;
            }
            if (moves >= 15)
                break;
        }

        if (moves >= 15)
            System.out.println("-1");
        else
            System.out.println(moves);
    }

}