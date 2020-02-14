#include "Point.h"
#include "Car.h"

Car::Car(double capacityIn, double consumptionIn, const Point& locationIn, const std::string& modelIn) {

    fuelCapacity = capacityIn;
    fuelConsumption = consumptionIn;
    location = locationIn;
    model = modelIn;
    fuelAmount = 30;
    
}

Car::~Car(){
    
}


double Car::getFuelAmount() const{
    return fuelAmount;
   
}

double Car::getFuelCapacity() const{
    return fuelCapacity;
    
}

double Car::getFuelConsumption() const{
    return fuelConsumption;
    
}

const Point& Car::getLocation() const{
    return location;
    
}

const std::string& Car::getModel() const{
    return model;
    
}

void Car::drive(const Point& destination){
    
    double distance = destination.distance(location);
    
    double requiredFuel = distance * fuelConsumption;
    if (fuelAmount < requiredFuel) {
        throw OutOfFuel();
    }
    else {
        location = destination;
        fuelAmount -= requiredFuel;
        
    }
    
    
}
    
void Car::drive(double x, double y){
    
    drive(Point(x,y));
    
}

void Car::refill(double fuel){
    
    if (fuelAmount + fuel > fuelCapacity) {
        throw ToMuchFuel();
    }
    else {
        fuelAmount += fuel;
    }
    
    
}

std::ostream& operator<<(std::ostream& out, const Car& car){
    out << "" << std::endl;
    out << "Модель:" << car.getModel() << std::endl;
    out << "Обьём бака:" << car.getFuelCapacity() << std::endl;
    out << "Расход топлива:" << car.getFuelConsumption() << std::endl;
    out << "Кол-во топлива:" << car.getFuelAmount() << std::endl;
    out << "Местоположение" << car.getLocation() << std::endl;
    
    return out;
}