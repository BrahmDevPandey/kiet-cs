// UNIT 2: ASSIGNMENT - 3
// program to give example for multiple inheritance in java

interface A {
	void giveMessage();
}

interface B {
	void printHello();
}

// multiple inheritance achieved through implementing multiple interfaces
class Derived implements A, B {
	public void giveMessage() {
		System.out.println("Message from interface A function.");
	}
	
	public void printHello() {
		System.out.println("Hello from interface B function.");
	}
}
	
public class MultipleInheritance {
	public static void main(String[] args) {
		Derived obj = new Derived();
		obj.giveMessage();
		obj.printHello();
	}
}
