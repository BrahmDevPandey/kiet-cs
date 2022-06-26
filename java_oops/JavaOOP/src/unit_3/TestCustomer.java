package unit_3;
//Unit-3: Assignment-4
// program to create a class Customer and raise user defined Exception

import java.io.*;

class Customer {
	private String custNo;
	private String custName;
	private String category;
	
	public Customer(String cNo, String cName, String cat) throws Exception {

		// checking for the validity
		if((cNo.charAt(0) != 'C' && cNo.charAt(0) != 'c') || cName.length() < 4
			|| (cat.equalsIgnoreCase("gold") == false && cat.equalsIgnoreCase("platinum") == false && cat.equalsIgnoreCase("silver") == false)){				
				throw new Exception("InvalidInputException");
			}

		this.custNo = cNo;
		this.custName = cName;
		this.category = cat;
	}
	
	public String getCustNo() {
		return custNo;
	}
	public String getCustName() {
		return custName;
	}
	public String getCategory() {
		return category;
	}
	

}
public class TestCustomer {
	public static void main(String[] args) {
		String num = "", name = "", cat = "";
		Customer c;
		BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Rules: ");
		System.out.println("1. Customer number must start with letter 'c' or 'C'");
		System.out.println("2. Customer name must have atleast 4 letters.");
		System.out.println("3. Category can be either Platinum, Gold or Silver.");
		System.out.println("Enter the customer number, name and category: ");
		
		try {
			num = buf.readLine();
			name = buf.readLine();
			cat = buf.readLine();
			
			// creating object
			c = new Customer(num, name, cat);
			
			// output details of Customer
			System.out.println("The details of Customer are: ");
			System.out.println("Customer number: " + c.getCustNo());
			System.out.println("Customer name: " + c.getCustName());
			System.out.println("Customer category: " + c.getCategory());
		} catch(IOException e) {
			System.out.println("IOException Occurred.");
		} catch(Exception e) {
			if(e.getMessage().equalsIgnoreCase("InvalidInputException")) {
				System.out.println("Invalid Details. Please enter details as per the rules.");
			}
			else {
				System.out.println("Exception occurred while creating object: " + e.getMessage());
			}
		}
	}
}