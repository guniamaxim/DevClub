#include "Unit.h"

int main(){

    Unit barbarian("Barbarian", 200, 30);
    Unit knight("Knight", 180, 100);
    
    std::cout << "Начальные данные:" << std::endl;
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;

    std::cout << " 1-я АТАКА!!!" << std::endl;
    try {
        barbarian.attack(knight);
    } catch (UnitIsDead) {
        std::cout << "ЮНИТ МЁРТВ!" << std::endl;
        return 0;
    }
    std::cout << "" << std::endl;
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    
    std::cout << "Восстановления очков здоровья" << std::endl;
    try {
        knight.addHitPoints(130);
        barbarian.addHitPoints(50);
    } catch (UnitIsDead){
        std::cout << "ЮНИТ МЁРТВ!" << std::endl;
        std::cout << "Мертвым юнитам невозможно восстановить очки здоровья" << std::endl;
        return 0;
    }
    
    std::cout << "2-я АТАКА!!!" << std::endl;
    try {
        barbarian.attack(knight);
    } catch (UnitIsDead) {
        std::cout << "ЮНИТ МЁРТВ!" << std::endl;
        return 0;
    }
    std::cout << "" << std::endl;
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    
    std::cout << " 3-я АТАКА!!!" << std::endl;
    try {
        barbarian.attack(knight);
    } catch (UnitIsDead) {
        std::cout << "ЮНИТ МЁРТВ!" << std::endl;
        return 0;
    }
    std::cout << "" << std::endl;

    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
     
    return 0;
}