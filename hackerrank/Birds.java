import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.toList;

class Result {
    public static int migratoryBirds(List<Integer> list) {
        int len = list.size();
        int arr[] = new int[len];
        for (int i = 0; i < len; i++)
            arr[i] = list.get(i);
        Arrays.sort(arr);

        int maxFreq = 1, freq = 1, mode = arr[0], ele = arr[0];
        for (int i = 1; i < len; i++) {
            if (arr[i] == ele) {
                freq++;
            } else {
                if (freq > maxFreq) {
                    maxFreq = freq;
                    mode = ele;
                }
                freq = 1;
            }
            ele = arr[i];
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            freq = 1;
            mode = ele;
        }
        return mode;
    }
}

public class Birds {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int arrCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        int result = Result.migratoryBirds(arr);

        System.out.println(String.valueOf(result));

        bufferedReader.close();
    }
}