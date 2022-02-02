/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class notpalindrome
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t, n;
		String res = "";
		Scanner sc = new Scanner(System.in);
	    t = sc.nextInt();
	    
	    while(t-- > 0) {
	        n = sc.nextInt();
	        res = "";
	        if(n == 1)
	            res += "a";
	        else if(n == 2)
	            res += "ab";
	        else {
	            int i = 1;
	            do {
	               res += "abcd";
	               i++;
	            } while(i <= n/3);
	               
	            res = res.substring(0, n);
	        }
	        System.out.println(res);
	    }
	}
}
