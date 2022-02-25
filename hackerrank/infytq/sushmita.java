import java.util.*;

public class sushmita {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        List<Integer> list = new ArrayList<Integer>();
        
        input = input.replace(".", "");
        String arr[] = input.split(" ");
        
        for(int i = 0; i < arr.length; i++)
        {
            try{
                int num = Integer.parseInt(arr[i]);
                list.add(num);
                // System.out.println("inserted " + num);
            }
            catch(Exception e) {
                // System.out.println("exception in " + arr[i]);
                continue;
            }
        }
        if(list.size() == 0)
            System.out.println("-1");
        else {
            int sum = findSum(list);

            if(isPrime(sum)) {
                System.out.println(sum);
            }
            else {
                sum = reverse(sum);
                if(isPrime(sum))
                    System.out.println(sum);
                else
                    printFactors(sum);
            }
        }
    }

    static int findSum(List<Integer> list) {
        int sum = 0, i = 0;
        while(i < list.size()) {
            sum += list.get(i) % 10;
            i++;
        }
        return sum;
    }
    
    static boolean isPrime(int num) {
        if(num == 1)
            return false;
        for(int i = 2; i <= num/2; i++)
            if(num % i == 0)
                return false;
        return true;
    }

    static int reverse(int num) {
        int rev = 0;
        while(num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }

    static void printFactors(int num) {
        System.out.print("1 ");
        for(int i = 2; i <= num/2; i++) 
            if(num % i == 0)
                System.out.print(i + " ");
        System.out.println(num);
    }
}