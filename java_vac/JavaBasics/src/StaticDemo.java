public class StaticDemo {
	int m, n;

	static int a, b;

	// will be called only once, at creation of first object
	static {
		System.out.println("I am in first static block.");
	}

	// will be called every time an object is created
	{
		System.out.println("I am in the static variable declaratiob block");
	}

	// will be called only once, at creation of first object
	static {
		System.out.println("I am in second static block.");
	}

	StaticDemo() {
		System.out.println("I am in constructor");
		a = 3;
		b = 4;
		m = 10;
		n = 20;
	}

	void display() {
		System.out.println("a = %d; b = %d; m = %d; n = %d".formatted(a, b, m, n));
	}
}
