import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class listdemo {
    public static void main(String[] args) {
        List<String> l = new ArrayList<>(Arrays.asList("Aman", "Bikki", "Guddi", "Aman", "Bikki"));
        System.out.println(l);
        l.remove("Aman");
        System.out.println(l);
    }
}
