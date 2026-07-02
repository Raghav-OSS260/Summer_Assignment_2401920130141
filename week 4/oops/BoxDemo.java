\class Box {

    protected double length;
    protected double breadth;

    // Constructor
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Area of Rectangle
    public double area() {
        return length * breadth;
    }

    public void displayArea() {
        System.out.println("Area = " + area());
    }
}

class Box3D extends Box {

    private double height;

    // Constructor
    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    // Volume
    public double volume() {
        return length * breadth * height;
    }

    public void displayVolume() {
        System.out.println("Volume = " + volume());
    }
}

public class BoxDemo {

    public static void main(String[] args) {

        Box b = new Box(10, 5);
        b.displayArea();

        Box3D b3 = new Box3D(10, 5, 4);
        b3.displayArea();
        b3.displayVolume();
    }
}