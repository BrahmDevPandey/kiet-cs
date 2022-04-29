import java.io.*;

class Result {

    /*
     * Complete the 'kangaroo' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     * 1. INTEGER x1
     * 2. INTEGER v1
     * 3. INTEGER x2
     * 4. INTEGER v2
     */

    public static String kangaroo(int x1, int v1, int x2, int v2) {
        // Write your code here
        if ((x2 > x1 && v2 > v1) || (x1 > x2 && v1 > v2)) // never meet
            return "NO";
        else if (x2 > x1 && v2 < v1) {
            double t = ((double) x2 - x1) / (v1 - v2); // the time at which they should meet
            double D = t * v1;
            if ((D - x1) % v1 == 0 && (D - x2) % v2 == 0)
                return "YES";
        }
        return "NO";
    }
}

public class Kangaroo {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int x1 = Integer.parseInt(firstMultipleInput[0]);

        int v1 = Integer.parseInt(firstMultipleInput[1]);

        int x2 = Integer.parseInt(firstMultipleInput[2]);

        int v2 = Integer.parseInt(firstMultipleInput[3]);

        String result = Result.kangaroo(x1, v1, x2, v2);

        System.out.println(result);
        bufferedReader.close();
    }
}
