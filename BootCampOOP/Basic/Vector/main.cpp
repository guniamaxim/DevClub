#include "Vector.h"

int main() {
    Vector a(2, 7);
    Vector b(3, 8);
    Vector c;
    
    std::cout << "Vector: " << a << ", length = " << a.len() << std::endl;
    std::cout << "Vector: " << b << ", length = " << b.len() << std::endl;
    std::cout << a << " == " << b << " is " << (a == b) << std::endl;
    std::cout << a << " != " << b << " is " << (a != b) << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    
    c = a + b;
    
    std::cout << "Vector: " << c << ", length = " << c.len() << std::endl;
    
    return 0;
}