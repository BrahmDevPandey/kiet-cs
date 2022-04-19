// UNIT 1: ASSIGNMENT - 4
// create a class "SimpleObject" and display message by using constructor of this class
public class SimpleObject {
	SimpleObject() {
		System.out.println("Constructor called.");
		System.out.println("Hello World Message from Constructor.");
	}
	
	public static void main(String args[]) {
		SimpleObject obj = new SimpleObject();	// calling the constructor
	}
}
