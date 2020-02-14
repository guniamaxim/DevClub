#include "Car.h"

int main() {
    
    Car car;
    Car BMW(70, 5, (0,0), "BMW");

    std::cout << car << std::endl;
    car.drive(Point(5,11));
    std::cout << car << std::endl;

    std::cout << "------------" << std::endl;

    std::cout << BMW << std::endl;
    try {
        BMW.drive(7.7, 10.11);;
    } catch (OutOfFuel) {
        std::cout << "Не хватает топлива" << std::endl; 
    }
    
    
    std::cout << "Заправляем!" << std::endl;
    try {
        BMW.refill(35);
    } catch (ToMuchFuel) {
        std::cout << "Бак переполнен, заправляйте меньше" << std::endl; 
    }
    
    std::cout << BMW << std::endl;
    try {
        BMW.drive(7.7, 10.11);;
    } catch (OutOfFuel) {
        std::cout << "Не хватает топлива" << std::endl; 
    }
    std::cout << BMW << std::endl;

        return 0;
    }