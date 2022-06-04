import java.util.Scanner;

public class Window {
    public static void main(String[] args) {
        int n, k;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int res = index(arr, n, k);
        System.out.println(res);
        sc.close();
    }

    public static int index(int arr[], int n, int k) {
        int sum = 0;

        for (int i = 0; i < n - k; i++) {
            sum = 0;
            for (int j = 0; j < k; j++) {
                sum += arr[i + j];
            }
            if (sum == 0) {
                return i + 1;
            }
        }
        return -1;
    }
}