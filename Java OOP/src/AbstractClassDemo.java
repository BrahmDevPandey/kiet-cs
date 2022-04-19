// UNIT 2: ASSIGNMENT - 2
// program to give example of a simple abstract class

abstract class Vehicle {
	String name;
	
	Vehicle(String name) {
		this.name = name;
	}
	
	public abstract void start();
	public abstract void stop();
}

class Car extends Vehicle {
	Car(String name) {
		super(name);
	}
	
	// implementing methods of class Vehicle
	public void start() {
		System.out.println(name + " started.");
	}
	
	public void stop() {
		System.out.println(name + " stopped.");
	}
}

public class AbstractClassDemo {
	public static void main(String args[]) {
		Car obj = new Car("Chevrolet Optra");
		obj.start();
		obj.stop();
	}
}
