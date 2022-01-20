import java.util.*;

public class test {
    public test(float i, float f) {
        System.out.println(i + f);
    }

    public test(int i, int f) {
        System.out.println(i + f);
    }

    public static void main(String[] args) {
        test t = new test(4.2f, 2.5f);
    }
    // int num = 100;

    // test(int n) {
    // num = n;
    // }

    // test t = new test(4);
    // System.out.println(t.num);
    // String s = "Hello";
    // System.out.println(s.substring(0, s.length() - 1));

    // // char str[] = "Hello".toCharArray();
    // // System.out.println(findLcm(200, 8));
    // // List<Integer> list = new ArrayList<Integer>(3);
    // int num = 10;
    // num = num >> 1;
    // System.out.println(num ^ 0);
    // }

    // static int findLcm(int a, int b) {
    // int divisor = Math.min(a, b), dividend = Math.max(a, b), remainder = dividend
    // % divisor;

    // do {
    // remainder = dividend % divisor;
    // dividend = divisor;
    // divisor = remainder;
    // } while (remainder > 0);
    // return (a * b) / dividend;
    // }
    // public int num1;
    // public int num2;

    // test(int num1, int num2) {
    // num1 = num1;
    // num2 = num2;
    // }

    // public static void main(String args[]) {
    // test tester = new test(20, 40);
    // System.out.println(tester.num1);
    // System.out.println(tester.num2);
    // int num;
    // System.out.println(num);
    // }
}