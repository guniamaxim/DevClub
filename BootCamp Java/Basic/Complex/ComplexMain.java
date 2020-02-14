public class ComplexMain {
    public static void main(String[] args   ) {
        Complex first = new Complex ();
        Complex second = new Complex ();
        
        System.out.println(first);
        System.out.println(second);
        System.out.println(first.isEqual(second));
        System.out.println(first.isNotEqual(second));
        System.out.println(first.sum(second));
    }
}