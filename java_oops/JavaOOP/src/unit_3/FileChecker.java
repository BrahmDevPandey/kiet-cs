package unit_3;
// Unit-3: Assignment-5
// program to create a text file and check whether it exists or not using various functions

import java.io.*;

public class FileChecker {
	public static void main(String[] args) {
		File f = new File("abc.txt");	// creating a file object

		// creating the file
		try {
			if(f.createNewFile()) {
				System.out.println("File Created successfully!");
			} else {
				System.out.println("File already exists.");
			}
		} catch (IOException e) {
			System.out.println("Exception occurred in File creation.");
			e.printStackTrace();
		}
		
		// 	using various functions on the file
		if(f.exists()) {
			System.out.println("The file now exists in the disk.");
			if(f.isDirectory()) 
				System.out.println("It is a Directory.");
			else
				System.out.println("It is not a Directory.");
			if(f.isFile())
				System.out.println("It is a File.");
			else
				System.out.println("It is not a File.");
			
			// display name and absolute path of the file
			System.out.println("The name of the file is: " + f.getName());
			System.out.println("The location of the file on the disk is: " + f.getAbsolutePath());
		}
		else 
			System.out.println("The file does not exist on the disk.");
	}
}
