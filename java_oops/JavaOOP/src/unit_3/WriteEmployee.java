package unit_3;
// Unit-3: Assignment-6
// program to write employee data to a file and read data from the file

import java.io.*;

class Employee {
	private int empNo;
	private String empName;
	private int empBasic;
	
	public Employee(int no, String name, int basic) {
		this.empNo = no;
		this.empName = new String(name);
		this.empBasic = basic;
	}
	
	public int getEmpNo() {
		return empNo;
	}
	
	public String getEmpName() {
		return empName;
	}
	
	public int getEmpBasic() {
		return empBasic;
	}
	
	public void showDetails() {
		System.out.println("Details of Employee are: ");
		System.out.println("Employee number: " + empNo);
		System.out.println("Employee name: " + empName);
		System.out.println("Employee basic salary: " + empBasic);
	}
}

public class WriteEmployee {
	public static void main(String[] args) {
		Employee e;
		int no = 0, basic = 0;
		String name = "";
		BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
		File f = new File("emp.txt");
		BufferedReader fread;
		BufferedWriter fwrite;
		
		try {
			System.out.println("Enter details of Employee: ");
			System.out.print("Employee number: ");
			no = Integer.parseInt(buf.readLine());
			System.out.print("Employee name: ");
			name = buf.readLine();
			System.out.print("Employee basic salary: ");
			basic = Integer.parseInt(buf.readLine());
		} catch (NumberFormatException e1) {
			System.out.println("Invalid entry in numeric field.");
			e1.printStackTrace();
		} catch (IOException e1) {
			System.out.println("IOException Occurred.");
			e1.printStackTrace();
		} finally {
			// object creation 
			e = new Employee(no, name, basic);
		}
		
		// writing employee details to file
		try { 
			if(!f.exists()) {
				f.createNewFile();
			}
			
			fwrite = new BufferedWriter(new FileWriter(f));
			fwrite.write(e.getEmpNo() + "\n");
			fwrite.write(e.getEmpName() + "\n");
			fwrite.write(e.getEmpBasic() + "\n");
			fwrite.close();
		} catch(IOException ioe) {
			System.out.println("IOException Occurred while writing data to file.");
			ioe.printStackTrace();
		}
		
		// reading stored data from the file
		try {
			fread = new BufferedReader(new FileReader(f));
			no = Integer.parseInt(fread.readLine());
			name = fread.readLine();
			basic = Integer.parseInt(fread.readLine());
			
			// creating new object with the given data fields
			e = new Employee(no, name, basic);
			System.out.println("Data read from the file:");
			e.showDetails();
			fread.close();
		} catch(NumberFormatException nfe) {
			System.out.println("NumberFormatException Occurred: Invalid numeric data read from file.");
			nfe.printStackTrace();
		} catch(IOException ioe) {
			System.out.println("IOException occurred.");
			ioe.printStackTrace();
		}
	}
}
