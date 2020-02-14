public class PointMain {
    public static void main(String[] args) throws CloneNotSupportedException {
        Point a = new Point(1, 2);
        Point b = new Point(3, 4);
        Point c = b.clone();
        Point d = new Point();

        System.out.println("b:" + b);
        System.out.println("c:" + c);
        System.out.println("d:" + d);

        c.setX(40);
        
        System.out.println("b:" + b);
        System.out.println("c:" + c);
    }
}