import java.util.Scanner;

class MyNode {
    private int data;
    private MyNode next;

    MyNode(int data) {
        this.data = data;
        this.next = null;
    }

    public MyNode getNext() {
        return this.next;
    }

    public int getData() {
        return this.data;
    }

    public void setNext(MyNode node) {
        next = node;
    }
}

public class list {
    public static void insertNode(MyNode head, int data) {
        MyNode temp = new MyNode(data);
        if (head == null) {
            head = temp;
        } else {
            MyNode iterator = head;
            while (iterator.getNext().getNext() != null) {
                iterator = iterator.getNext();
            }
            iterator.setNext(temp);
        }
    }

    public static void printLinkedList(MyNode head) {
        MyNode temp = head;
        while (temp != null) {
            System.out.println(temp.getData());
        }
    }

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        int len;
        MyNode head = null;
        Scanner sc = new Scanner(System.in);
        len = sc.nextInt();

        // inserting nodes
        for (int i = 0; i < len; i++)
            insertNode(head, sc.nextInt());

        // printing data of all the nodes
        printLinkedList(head);
    }
}