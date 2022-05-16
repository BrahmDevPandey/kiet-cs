// UNIT 2: ASSIGNMENT - 4
// program to implement a class Number with one private instance variable and various boolean functions for checking

class Number {
	private double num;
	
	Number(double n) {
		this.num = n;
	}
	
	public boolean isZero() {
		if(num == 0)
			return true;
		return false;
	}
	
	public boolean isPositive() {
		if(num > 0 )
			return true;
		return false;
	}
	
	public boolean isNegative() {
		if(num < 0)
			return true;
		return false;
	}
	
	public boolean isOdd() {
		if(num % 2 == 1)
			return true;
		return false;
	}
	
	public boolean isEven() {
		if(!isOdd())
			return true;
		return false;
	}
	
	public boolean isPrime() {
		for(int i = 2; i < num/2; i++) {
			if(num % i == 0)
				return false;
		}
		
		return true;
	}
	
	private int digits(double n) {
		return Double.valueOf(n).toString().length();
	}
	
	public boolean isArmstrong() {
		int len = digits(this.num);
		long temp = (long)num, dig, sum = 0;
		
		while(temp > 0) {
			dig = temp % 10;	// extract the last digit from the number
			sum += Math.pow(dig, len);	// add the (len)th power of digit to sum
			temp /= 10;		// remove the last digit from the number
		}
		
		if(sum == num)
			return true;
		return false;
	}
}

public class NumberDemo {
	public static void main(String[] args) {
		Number n = new Number(231);
		System.out.println("Zero = " + n.isZero());
		System.out.println("Positive = " + n.isPositive());
		System.out.println("Negative = " + n.isNegative());
		System.out.println("Even = " + n.isEven());
		System.out.println("Odd = " + n.isOdd());
		System.out.println("Prime = " + n.isPrime());
		System.out.println("Armstrong = " + n.isArmstrong());
	}
}
