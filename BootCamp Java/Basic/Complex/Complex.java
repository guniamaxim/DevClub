
public class Complex {
    private double real;
    private double imaginary;

    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    public Complex() {
        this(7, 5);
    }

    public double getReal() {
        return real;
    }
    
    public double getImaginary() {
        return imaginary;
    }

    public boolean isEqual(Complex other) {
        return this.real == other.real && this.imaginary == other.imaginary;
    }
    
    public boolean isNotEqual(Complex other) {
        return !isEqual(other);
    }
    
    public void increment(Complex other) {
        this.real += other.real;
        this.imaginary += other.imaginary;
    }
    
    public void decrement(Complex other) {
        this.real -= other.real;
        this.imaginary -= other.imaginary;
    }
    
    public Complex sum(Complex other) {
        Complex sum = new Complex();
    
    sum.real = this.real + other.real;
    sum.imaginary = this.imaginary + other.imaginary;
    return sum;
    }
    
    public Complex diff(Complex other) {
        Complex diff = new Complex();

        diff.real = this.real - other.real;
        diff.imaginary = this.imaginary - other.imaginary;
        return diff;
    }
    
    public Complex product(Complex other) {
        Complex product = new Complex();

        product.real = this.real * other.real;
        product.imaginary = this.imaginary * other.imaginary;
        return product;
    }

    public String toString() {
        return "(" + real + "+" + imaginary + "im )";
    }
}