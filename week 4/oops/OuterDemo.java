class Outer {

    void display() {
        System.out.println("This is Outer Class Display Function.");
    }

    class Inner {

        void display() {
            System.out.println("This is Inner Class Display Function.");
        }
    }
}

public class OuterDemo {

    public static void main(String[] args) {

        Outer obj = new Outer();
        obj.display();

        Outer.Inner in = obj.new Inner();
        in.display();
    }
}