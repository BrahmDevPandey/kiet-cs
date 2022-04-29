// program to demo the use of static block in a class
public class StaticEx {
    public static void main(String[] args) {
        System.out.println("Hello");
        StaticDemo s = new StaticDemo();
        StaticDemo s1 = new StaticDemo();
        s.display();
        s1.display();
    }
}