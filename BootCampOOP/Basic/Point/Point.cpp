#include "Point.h"


Point::Point(double xIn, double yIn) : x(xIn), y(yIn) {

}

Point::~Point() {}

double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}

void Point::setX(double value){
    x = value;
}

void Point::setY(double value){
    y = value;
}

double Point::distance(const Point& other) const {
    
    return hypot(other.x-x, other.y-y);
    
}

bool Point::operator==(const Point& other) const {
    return (x == other.getX() && y == other.getY());
}

bool Point::operator!=(const Point& other) const {
    return !operator==(other);
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}