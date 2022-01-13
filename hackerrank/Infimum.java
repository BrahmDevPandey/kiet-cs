
// program to find the infimum of a number in an array
import java.util.*;

public class Infimum {
    public static void main(String[] args) {
        int arr[], val;
        Scanner sc = new Scanner(System.in);
        String line[] = (sc.nextLine()).split(" ");

        // reading the array
        arr = new int[line.length];
        int len = arr.length;
        for (int i = 0; i < len; i++)
            arr[i] = Integer.parseInt(line[i]);
        // done

        val = sc.nextInt();

        // checking
        int i;
        for (i = 0; i < len - 1; i++) {
            if (arr[i] < val && arr[i + 1] >= val) {
                System.out.println(arr[i]);
                break;
            }
        }

        if (i == len - 1)
            System.out.println(arr[len - 1]);
    }
}
