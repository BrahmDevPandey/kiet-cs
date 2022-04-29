// UNIT 2: ASSIGNMENT - 1
// program to create a class "Shape" and create three subclasses Circle, Triangle and Square

class Shape {
	public void draw() {
		System.out.println("Drawing a Shape");
	}
	
	public void erase() {
		System.out.println("Erasing a Shape");
	}
}

class Circle extends Shape {
	public void draw() {
		System.out.println("Drawing a Circle");	
	}
	
	public void erase() {
		System.out.println("Erasing a Circle");
	}
}

class Triangle extends Shape {
	public void draw() {
		System.out.println("Drawing a Triangle");
	}
	
	public void erase() {
		System.out.println("Erasing a Triangle");
	}
}

class Square extends Shape {
	public void draw() {
		System.out.println("Drawing a Square");
	}
	
	public void erase() {
		System.out.println("Erasing a Square");
	}
}

public class ShapeDemo {
	public static void main(String args[]) {
		Shape shapeObj = new Shape();
		Circle circleObj = new Circle();
		Triangle triangleObj = new Triangle();
		Square squareObj = new Square();
		
		System.out.println("Calling methods of all the objects...");
		shapeObj.draw();
		shapeObj.erase();
		circleObj.draw();
		circleObj.erase();
		triangleObj.draw();
		triangleObj.erase();
		squareObj.draw();
		squareObj.erase();
	}
}
