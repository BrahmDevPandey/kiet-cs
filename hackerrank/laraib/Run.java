import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Run {
    public static void main(String[] args) throws IOException {
        System.out.println("Hello World");
        Process process = Runtime.getRuntime().exec("ls");
        BufferedReader buf = new BufferedReader(new InputStreamReader(process.getInputStream()));

        String line;
        while ((line = buf.readLine()) != null) {
            System.out.println(line);
        }
    }
}
