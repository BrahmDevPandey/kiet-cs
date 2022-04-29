// program to demo inheritance in java

class Shape {
	String name;
	
	Shape(String name) {
		this.name = name;
	}
	
	// overloading
	Shape display() {
		System.out.println("Display of Shape called without any arguments.");
		return new Shape("Circle");
	}
	
	void display(String msg) {
		System.out.println("Display of Shape called with argument: " + msg);
	}
	
	// overrides toString() method of Object class
	@Override
 	public String toString() {
 		return "Object of class Shape named " + name;
 	}
}

class Circle extends Shape {
	int radius; 
	
	Circle(int radius) {
		super("Circle");	// calling super class constructor
		this.radius = radius;
	}
	
	// overriding
	@Override
	// using covariant return type
	Circle display() {
		System.out.println("Display of Circle called without any arguments.");
		return new Circle(10);
	}
		
	void showArea() {
		System.out.println("The area of Circle with radius %d is %d".formatted(radius, (int)3.14*radius*radius));
	}
}

public class InheritanceDemo {
	public static void main(String[] args) {
		System.out.println("Creation of a normal object...");
		Circle circle = new Circle(12);
		circle.display();
		circle.display("Hello");
		circle.showArea();
		
		System.out.println("Creation of an object using upcasting...");
		Shape shape = new Circle(5);	// upcasting
		shape.display();				// call overridden function of subclass
		shape.display("Hello"); 		
		// shape.showArea();		// can't access the method showArea()
		
		System.out.println("Creation of an object using downcasting of previously created object...");
		Circle circle2 = (Circle)shape;		// downcasting
		circle2.display();
		circle2.display("Hello");
		circle2.showArea();
		
		// expt
		// results in runtime error as downcasting is done without upcasting
		Circle circle3 = (Circle) new Shape("Square");
		circle3.display();
		circle3.display("Hello");
		circle3.showArea();
	}
}
