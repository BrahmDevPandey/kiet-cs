// program to demo the implementation of an interface as a lambda expression
@FunctionalInterface
interface Message {
	void printMessage(String msg);
//	void display(int n);		// gives error as a functional interface can't have more than one methods
}

class Lambda{
	private Message m = (msg) -> System.out.println("Message passed is: " + msg);
	
	void callLambda() {
		m.printMessage("Hello Lambda");
	}
}

public class LambdaDemo {
	public static void main(String[] args) {
		Lambda obj = new Lambda();
		obj.callLambda();
	}
}
