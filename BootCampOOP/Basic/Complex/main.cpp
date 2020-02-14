#include "Complex.h"

int main() {
    Complex a(2, 3);
    Complex b(2, 2);
    
    std::cout << a << " == " << b << " = " << (a == b) << std::endl;
    std::cout << a << " != " << b << " = " << (a != b) << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
   
    return 0;
}