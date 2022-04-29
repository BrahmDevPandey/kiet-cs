//Assignment 1: To find greatest number from 3 numbers entered from user
import java.util.Scanner;

class Greatest {
	private int num1, num2, num3, greatest;
	
	public void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 3 numbers: ");
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		num3 = sc.nextInt();
		sc.close();
	}
	
	public void findGreatest() {
		if(num1 > num2) {
			if(num1 > num3)
				greatest = num1;
			else
				greatest = num3;
		} else { 
			if(num2 > num3)
				greatest = num2;
			else
				greatest = num3;
		}
	}
	
	public void printGreatest() {
		System.out.println("The greatest of " + num1 + ", " + num2 + " and " + num3 + " is: " + greatest);
	}
}

public class GreatestMain {
	public static void main(String args[]) {
		Greatest obj = new Greatest();
		obj.input();
		obj.findGreatest();
		obj.printGreatest();
	}
}
