// UNIT 1: ASSIGNMENT - 5
// program to demonstrate static variables, methods and block
class Student {
	// the static variable
	static int totalStudents;
	
	// instance variables
	int roll;
	String name;
	
	// static methods
	public static void incrementTotalStudents() {
		totalStudents++;
	}
	
	Student(int roll, String name) {
		this.roll = roll;
		this.name = name;
		incrementTotalStudents();	// calling the static method
	}
	
	// instance methods
	public void showDetails() {
		System.out.println("Student roll number: " + this.roll);
		System.out.println("Student name: " + this.name);
	}
	// static block for initialization of the static variable
	// this block is executed only once when the first object of the class is created
	static {
		System.out.println("Static block called.");		// will be printed only once
		totalStudents = 0;
	}
}

public class StaticDemo {
	public static void main(String args[]) {
		// creating 3 objects of the Student class
		Student s1 = new Student(21, "Nakul");
		Student s2 = new Student(43, "Rajesh");
		Student s3 = new Student(51, "Yusharth");
		
		// accessing the static variable through class
		System.out.println("Total number of students in class: " + Student.totalStudents);
		
		// accessing the instance methods
		System.out.println("The details of all the students are: ");
		s1.showDetails();
		s2.showDetails();
		s3.showDetails();
	}
}