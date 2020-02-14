#include "Vector.h"

Vector::Vector(double xIn, double yIn) {
    this->x = xIn;
    this->y = yIn;
}

Vector::~Vector() {}

double Vector::getX() const {
    return x;
}

double Vector::getY() const {
    return y;
}

void Vector::setX(double value) {
    x = value;   
}

void Vector::setY(double value) {
    y = value;
}

double Vector::len() const{
    return hypot(x,y);
}

bool Vector::operator==(const Vector& other) const {
    return (x == other.getX() && y == other.getY());
}

bool Vector::operator!=(const Vector& other) const {
    return !operator==(other);
}

void Vector::operator+=(const Vector& other) {
    x += other.getX();
    y += other.getY();
}

void Vector::operator-=(const Vector& other) {
    x -= other.getX();
    y -= other.getY();
}

Vector Vector::operator+(const Vector& other) const {
    Vector result;
    result.x = this->x + other.getX();
    result.y = this->y + other.getY();
    
    return result;
}

Vector Vector::operator-(const Vector& other) const {
    Vector result;
    result.x = this->x - other.getX();
    result.y = this->y - other.getY();
    
    return result;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
    out << "(" << vector.getX() << ", " << vector.getY() << ")";
    return out;
}