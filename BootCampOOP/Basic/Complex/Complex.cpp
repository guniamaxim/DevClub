#include "Complex.h"

Complex::Complex(double realIn, double imaginaryIn){
    this->real = realIn;
    this->imaginary = imaginaryIn;
}

Complex::~Complex() {}

double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return real == other.getReal() && imaginary == other.getImaginary();
}

bool Complex::operator!=(const Complex& other) const {
    return !operator==(other);
}

void Complex::operator+=(const Complex& other){
    real += other.getReal();
    imaginary += other.getImaginary();
}

void Complex::operator-=(const Complex& other){
    real -= other.getReal();
    imaginary -= other.getImaginary();
}

Complex Complex::operator+(const Complex& other) const {
    Complex result;
    result.real = this->real + other.getReal();
    result.imaginary = this->imaginary + other.getImaginary();
    
    return result;
}

Complex Complex::operator-(const Complex& other) const {
    Complex result;
    result.real = this->real - other.getReal();
    result.imaginary = this->imaginary - other.getImaginary();
    
    return result;
}

Complex Complex::operator*(const Complex& other) const {
    Complex result;
    result.real = this->real * other.getReal();
    result.imaginary = this->imaginary * other.getImaginary();
    
    return result;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.getReal() << (complex.getImaginary() > 0 ? "+" : "") << 
    complex.getImaginary() << "i";
    return out;
};