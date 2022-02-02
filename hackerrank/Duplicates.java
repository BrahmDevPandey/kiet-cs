
// program to remove duplicates from a string
import java.util.Arrays;
import java.util.Scanner;

public class Duplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        ;
        char arr[] = str.toCharArray();
        Arrays.sort(arr);
        // changing the duplicates
        String res = "" + arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] == arr[i - 1])
                continue;
            else
                res += arr[i];
        }
        System.out.println(res);
        sc.close();
    }
}