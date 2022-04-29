// program to create a Room class in Java
import java.util.Scanner;

class Room {
    int roomNo;
    String roomType;
    double roomArea;
    boolean acMachine;

    public void setData() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter room number: ");
        roomNo = sc.nextInt();
        sc.nextLine();
        System.out.println("Enter room type: ");
        roomType = sc.nextLine();
        System.out.println("Enter room area: ");
        roomArea = sc.nextDouble();
        sc.nextLine();
        System.out.println("Is it an AC room?(y/n): ");
        char ch = sc.nextLine().charAt(0);
        if(ch == 'Y' || ch == 'y')
            acMachine = true;
        else
            acMachine = false;
    }

    public void displayData() {
        System.out.println("Details of room are: ");
        System.out.println("Room number: " + roomNo);
        System.out.println("Room type: " + roomType);
        System.out.println("Room area: " + roomArea);
        System.out.println("AC installed: " + acMachine);
    }
}

public class RoomMain {
    public static void main(String args[]) {
        Room obj = new Room();
        obj.setData();
        obj.displayData();
    }
}