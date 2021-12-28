import java.util.*;

public class StrFunctions {
    public static void main(String[] args) {
        String num;
        Scanner sc = new Scanner(System.in);

        num = sc.nextLine();
        char arr[] = toCharArray(num);
        sort(arr);
        String str = new String(arr);
        str = reverse(str);
        System.out.println(str);
        sc.close();
    }

    private static String reverse(String str) {
        String rev = "";
        int i, len = str.length();

        for (i = len - 1; i >= 0; i--)
            rev += str.charAt(i);
        return rev;
    }

    public static char[] toCharArray(String str) {
        int len = str.length();
        char arr[] = new char[len];

        for (int i = 0; i < len; i++)
            arr[i] = str.charAt(i);
        return arr;
    }

    public static void sort(char arr[]) {
        int i, j, flag, len = arr.length;
        char ch;

        for (i = 0; i < len - 1; i++) {
            flag = 0;
            for (j = 0; j < len - i - 1; j++) {
                if (arr[j] > arr[j + 1]) { // the bubble sort algorithm
                    flag = 1;
                    ch = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = ch;
                }
            }
            if (flag == 0)
                break;
        }
    }
}