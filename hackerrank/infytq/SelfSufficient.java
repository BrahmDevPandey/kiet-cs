// infytq self sufficient problem solution
// https://prepinsta.com/infytq-previous-year-papers/coding-questions/
import java.util.Scanner;

public class SelfSufficient {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int earn[] = new int[n];
        int book[] = new int[n];

        for(int i = 0; i < n; i++)
            earn[i] = sc.nextInt();
        for(int i = 0; i < n; i++)
            book[i] = sc.nextInt();
        
        int sum = 0;
        for(int i = 0; i < n; i++)
            if(earn[i] < book[i])
                sum += book[i] - earn[i];
        System.out.println(sum);
    }
}