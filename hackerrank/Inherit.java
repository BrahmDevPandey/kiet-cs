class Inherit {
    public void write() {
        System.out.println("INherit");
    }
}

class Inherited extends Inherit {
    public void write() {
        System.out.println("INherited");
    }
}

class Tester {
    public static void main(String[] args) {
        Inherit i = new Inherited();
        i.write();
    }
}