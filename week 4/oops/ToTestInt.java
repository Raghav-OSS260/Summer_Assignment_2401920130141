interface Test {
    int square(int x);
}

class Arithmetic implements Test {

    @Override
    public int square(int x) {
        return x * x;
    }
}

public class ToTestInt {
    public static void main(String[] args) {

        Arithmetic obj = new Arithmetic();

        int num = 8;

        System.out.println("Number = " + num);
        System.out.println("Square = " + obj.square(num));
    }
}