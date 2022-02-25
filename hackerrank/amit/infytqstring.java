
// infytq string program
import java.util.*;

class uniChar {
    char ch;
    int firstind;
    List<Integer> indexlist;

    uniChar() {
        indexlist = new ArrayList<Integer>();
    }
}

public class infytqstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String instr = sc.nextLine();
        List<String> inarr = Arrays.asList(sc.nextLine().split(","));
        String outstr = "";
        String uniques = getUniques(instr);
        int ilen = instr.length();
        int ulen = uniques.length();

        for (int i = 0; i < ulen; i++) {
            boolean isMapped = true;
            char ch = uniques.charAt(i);
            int firstind = instr.indexOf("" + ch);
            List<Integer> indexlist = new ArrayList<Integer>();

            for (int j = firstind; j < ilen; j++) {
                if (instr.charAt(j) == ch)
                    indexlist.add(j);
            }
            String str = inarr.get(firstind);
            for (int j = 0; j < ilen; j++) {
                // if(!str.equals(inarr.get(u.indexlist.get(j))))
                // isMapped = false;
                if (inarr.get(j).equals(str) ^ indexlist.contains(j)) {
                    isMapped = false;
                    break;
                }
                // else if(!inarr.get(j).equals(str))
            }
            if (isMapped)
                outstr += ch;
        }
        if (outstr.length() == 0)
            System.out.println("NA");
        else
            System.out.println(outstr);
    }

    private static String getUniques(String instr) {
        String unique = "";
        List<Character> list = new ArrayList<Character>();
        int len = instr.length();

        for (int i = 0; i < len; i++) {
            if (!list.contains(instr.charAt(i)))
                list.add(instr.charAt(i));

        }

        for (int i = 0; i < list.size(); i++) {
            unique += list.get(i);
        }
        return unique;
    }
}