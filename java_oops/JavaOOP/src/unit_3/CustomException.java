package unit_3;
// Unit-3: Assignment-3
// to create a user-defined exception

import java.util.InputMismatchException;
import java.util.Scanner;

class Factorial {
	int num;
	public Factorial(int n) throws Exception {
		if(n < 0) {
			throw new Exception("NegativeNumberFactorialException");
		}
		this.num = n;
	}
	
	public long getFactorial() {
		long fact = 1;
		for(int i = 1; i <= this.num; i++)
			fact *= i;
		return fact;
	}
}

public class CustomException {
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a number to find its factorial: ");
		n = sc.nextInt();
		try {			
			Factorial f = new Factorial(n);
			System.out.println("The factorial of %d is %d.".formatted(n, f.getFactorial()));
		} catch(InputMismatchException e) {
			System.out.println("Invalid Input. Enter numeric values only.");
		} catch(Exception e) {
			if(e.getMessage().equals("NegativeNumberFactorialException"))
				System.out.println("Invalid input. Enter only non-negative number.");
			else
				System.out.println("Exception Occurred: " + e.getMessage());
		}
	}
}
