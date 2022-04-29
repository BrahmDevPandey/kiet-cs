public class Test {
    public static void main(String[] args) {
        String string = "hai hello";
        String[] wordAr = string.split(" ");
        for (String s : wordAr) {
            System.out.println(s.replaceAll("(?i)[^aeiouy]", "").length());
        }
    }
}
