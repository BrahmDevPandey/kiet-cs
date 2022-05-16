
// program to test the performace of two different implementations of the same function
import java.util.*;

public class PerformaceTest {
    public void countMyList(int d, List<Integer> arr) {
        int len = arr.size(), count = 0;
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                for (int k = j + 1; k < len; k++) {
                    if (arr.get(j) - arr.get(i) == d && arr.get(k) - arr.get(j) == d) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }

    public void countAdarsh(int d, List<Integer> arr) {
        int count = 0, len = arr.size(), val;
        for (int i = 0; i < len; i++) {
            val = arr.get(i);
            if (arr.contains(val + d) && arr.contains(val + 2 * d))
                count++;
        }
        System.out.println(count);
    }

    public void countMyListConditional(int d, List<Integer> arr) {
        int len = arr.size(), count = 0;
        for (int i = 0; i < len - 2; i++) {
            outer: for (int j = i + 1; j < len - 1; j++) {
                if (arr.get(j) - arr.get(i) == d) {
                    for (int k = j + 1; k < len; k++) {
                        if (arr.get(k) - arr.get(j) == d) {
                            count++;
                            break outer;
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }

    public void countMyListConditionalPrashant(int d, List<Integer> arr) {
        int len = arr.size(), count = 0;
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1 && arr.get(j) - arr.get(i) <= d; j++) {
                if (arr.get(j) - arr.get(i) == d) {
                    for (int k = j + 1; k < len && arr.get(k) - arr.get(j) <= d; k++) {
                        if (arr.get(k) - arr.get(j) == d) {
                            count++;
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }

    public void countMyArr(int d, List<Integer> list) {
        int len = list.size(), count = 0;
        Object arr[] = list.toArray();
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                for (int k = j + 1; k < len; k++) {
                    if ((int) arr[j] - (int) arr[i] == d && (int) arr[k] - (int) arr[j] == d) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }

    public void countMyArrConditional(int d, List<Integer> list) {
        int len = list.size(), count = 0;
        int arr[] = new int[len];

        // creating an array for faster access of elements
        for (int i = 0; i < len; i++)
            arr[i] = list.get(i);

        // searching for triplets in the array
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                if (arr[j] - arr[i] == d) {
                    for (int k = j + 1; k < len; k++) {
                        if (arr[k] - arr[j] == d) {
                            count++;
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }

    public void countMyArrConditionalPrashant(int d, List<Integer> list) {
        int len = list.size(), count = 0;
        int arr[] = new int[len];

        // creating an array for faster access of elements
        for (int i = 0; i < len; i++)
            arr[i] = list.get(i);

        // searching for triplets in the array
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1 && arr[j] - arr[i] <= d; j++) {
                if (arr[j] - arr[i] == d) {
                    for (int k = j + 1; k < len && arr[k] - arr[j] <= d; k++) {
                        if (arr[k] - arr[j] == d) {
                            count++;
                            break;
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }

    public void countMyArrConditionalPrashantModified(int d, List<Integer> list) {
        int len = list.size(), count = 0;
        int arr[] = new int[len];

        // creating an array for faster access of elements
        for (int i = 0; i < len; i++)
            arr[i] = list.get(i);

        // searching for triplets in the array
        for (int i = 0; i < len - 2; i++) {
            outer: for (int j = i + 1; j < len - 1 && arr[j] - arr[i] <= d; j++) {
                if (arr[j] - arr[i] == d) {
                    for (int k = j + 1; k < len && arr[k] - arr[j] <= d; k++) {
                        if (arr[k] - arr[j] == d) {
                            count++;
                            break outer;
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }

    public static void main(String[] args) {
        List<Integer> list = new ArrayList<Integer>();
        int n, d;
        long startTimeCountMyList,
                endTimeCountMyList,
                startTimeCountAdarsh,
                endTimeCountAdarsh,
                startTimeCountMyListConditional,
                endTimeCountMyListConditional,
                startTimeCountMyListConditionalPrashant,
                endTimeCountMyListConditionalPrashant,
                startTimeCountMyArr,
                endTimeCountMyArr,
                startTimeCountMyArrConditional,
                endTimeCountMyArrConditional,
                startTimeCountMyArrConditionalPrashant,
                endTimeCountMyArrConditionalPrashant,
                startTimeCountMyArrConditionalPrashantModified,
                endTimeCountMyArrConditionalPrashantModified;

        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        d = sc.nextInt();
        for (int i = 0; i < n; i++)
            list.add(sc.nextInt());
        PerformaceTest obj = new PerformaceTest();

        // function calls
        System.out.println("Calling functions, please wait...");
        startTimeCountMyList = System.currentTimeMillis();
        obj.countMyList(d, list);
        endTimeCountMyList = System.currentTimeMillis();

        startTimeCountAdarsh = System.currentTimeMillis();
        obj.countAdarsh(d, list);
        endTimeCountAdarsh = System.currentTimeMillis();

        startTimeCountMyListConditional = System.currentTimeMillis();
        obj.countMyListConditional(d, list);
        endTimeCountMyListConditional = System.currentTimeMillis();

        startTimeCountMyListConditionalPrashant = System.currentTimeMillis();
        obj.countMyListConditionalPrashant(d, list);
        endTimeCountMyListConditionalPrashant = System.currentTimeMillis();

        startTimeCountMyArr = System.currentTimeMillis();
        obj.countMyArr(d, list);
        endTimeCountMyArr = System.currentTimeMillis();

        startTimeCountMyArrConditional = System.currentTimeMillis();
        obj.countMyArrConditional(d, list);
        endTimeCountMyArrConditional = System.currentTimeMillis();

        startTimeCountMyArrConditionalPrashant = System.currentTimeMillis();
        obj.countMyArrConditionalPrashant(d, list);
        endTimeCountMyArrConditionalPrashant = System.currentTimeMillis();

        startTimeCountMyArrConditionalPrashantModified = System.currentTimeMillis();
        obj.countMyArrConditionalPrashantModified(d, list);
        endTimeCountMyArrConditionalPrashantModified = System.currentTimeMillis();

        // performace results
        System.out.println("Performance tests of all functions:");
        System.out.println("countMyList: " + (endTimeCountMyList - startTimeCountMyList));
        System.out.println("countAdarsh: " + (endTimeCountAdarsh - startTimeCountAdarsh));
        System.out.println(
                "countMyListConditional: " + (endTimeCountMyListConditional - startTimeCountMyListConditional));
        System.out.println("countMyListConditionalPrashant: "
                + (endTimeCountMyListConditionalPrashant - startTimeCountMyListConditionalPrashant));
        System.out.println("countMyArr: " + (endTimeCountMyArr - startTimeCountMyArr));
        System.out.println("countMyArrConditional: " + (endTimeCountMyArrConditional - startTimeCountMyArrConditional));
        System.out.println("countMyArrConditionalPrashant: "
                + (endTimeCountMyArrConditionalPrashant - startTimeCountMyArrConditionalPrashant));
        System.out.println("countMyArrConditionalPrashantModified: "
                + (endTimeCountMyArrConditionalPrashantModified - startTimeCountMyArrConditionalPrashantModified));
    }
}
