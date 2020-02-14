public class Point {
    private double x;
    private double y;
    
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public Point() {
        this(0, 0);
    }
    public double getX()  {
        return this.x;
    }

    public double getY()  {
        return this.y;
    }


    public double distance( Point other)  {
        return Math.hypot(this.x - other.x, this.y - other.y);
    }

    public boolean isEqual( Point other) {
        return this.x == other.x && this.y == other.y;
    }

    public boolean isNotEqual( Point other)  {
        return !isEqual(other);
    }
    public void pointPrint() {
        System.out.println("("+getX()+","+getY()+")");
    }
}