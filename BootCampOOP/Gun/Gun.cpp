#include "Gun.h"

Gun::Gun(const std::string& modelIn, int capacityIn){
    model = modelIn;
    capacity = capacityIn;
    amount = 0;
    totalShots = 0;
    isReady = false;
}

Gun::~Gun(){
  
}

int Gun::getAmount() const{
    return amount;
}

int Gun::getCapacity() const{
    return capacity;
}

bool Gun::ready() const{
    return isReady;
}

const std::string& Gun::getModel() const{
    return model;
}

int Gun::getTotalShots() const{
    return totalShots;
}

void Gun::prepare() {
    isReady = !isReady;
}

void Gun::reload() {
    amount = 0;
}

void Gun::shoot() {
    if ( !ready() ) {
       throw NotReady();
    }
    if ( amount == 0 ) {
       throw OutOfRounds();
    }
    std::cout<< "BANG!" << std::endl;
    std::cout<< "" << std::endl;
    amount -= 1;
    totalShots += 1; 
    isReady = false; 
}

std::ostream& operator<<(std::ostream& out, const Gun& gun){
    out << "Модель:" << gun.getModel() << std::endl;
    out << "Кол-во встрелов:" << gun.getTotalShots() << std::endl;
    out << "Вместимость магазина:" << gun.getCapacity() << std::endl;
    out << "Кол-во патронов:" << gun.getAmount() << std::endl;
}