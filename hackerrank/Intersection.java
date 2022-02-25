import java.io.*;
import java.util.*;

public class Intersection {

    public static void main(String[] args) {
        List<String> l1 = new ArrayList<>();
        List<String> l2 = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        l1.addAll(Arrays.asList(sc.nextLine().split(" ")));
        l2.addAll(Arrays.asList(sc.nextLine().split(" ")));
        // System.out.println(l1 + "\n" + l2);
        // checking the common elements
        for (int i = 0; i < l1.size(); i++) {
            if (l2.contains(l1.get(i))) {
                System.out.print(l1.get(i) + " ");
                l2.remove(l1.get(i));
            }
        }
    }
}