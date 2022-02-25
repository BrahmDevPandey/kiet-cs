import java.util.Scanner;

public class toffee {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int res = MakePacket(sc.nextInt(), sc.nextInt(), sc.nextInt());
        if (res < 0) {
            System.out.println("Not Possible.");
        } else {
            System.out.println(res);
        }
    }

    public static int MakePacket(int small, int big, int TotalWeight) {
        int req = (TotalWeight - 5 * big);
        if (req > small) {
            return -1;
        } else {
            return req;
        }
    }
}