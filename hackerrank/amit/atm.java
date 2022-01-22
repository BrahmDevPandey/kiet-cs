import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        float bal, draw;
        Scanner sc = new Scanner(System.in);
        
        draw = sc.nextFloat();
        bal = sc.nextFloat();
        if(draw > bal || draw % 5 != 0)
            System.out.println(bal);
        else
        {
            bal = bal - draw - 0.5f;
            System.out.println(bal);
        }
        
    }
}