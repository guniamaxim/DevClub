#include "Unit.h"

Unit::Unit(const std::string& nameIn, int hpIn, int dmgIn){
    
    name = nameIn;
    hitPointsLimit = hpIn;
    damage = dmgIn;
    hitPoints = hitPointsLimit;
    
}

Unit::~Unit(){
    
}

void Unit::ensureIsAlive() {
    
   if ( hitPoints == 0 ) {
       throw UnitIsDead();
   }
}

int Unit::getDamage() const{
    return damage;
    
}

int Unit::getHitPoints() const{
    return hitPoints;
    
}

int Unit::getHitPointsLimit() const{
    return hitPointsLimit;
    
}

const std::string& Unit::getName() const{
    return name;
    
}

void Unit::takeDamage(int dmg){

    if (dmg < hitPoints){
        hitPoints -= dmg;
    }
    else {
        hitPoints = 0;
    }
}

void Unit::addHitPoints(int hp){
    
    ensureIsAlive();
    
    if (hitPoints + hp > hitPointsLimit){
        hitPoints = hitPointsLimit;
    }
    else {
        hitPoints += hp;
    }    
    
}

void Unit::attack(Unit& enemy){
    
    ensureIsAlive();
    enemy.ensureIsAlive();
    
    enemy.takeDamage(damage);
    
    if (enemy.getHitPoints() > 0){
        enemy.counterAttack(*this);
    }
    ensureIsAlive();
    enemy.ensureIsAlive();
}

void Unit::counterAttack(Unit& enemy){
    enemy.takeDamage(damage / 2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit){
    out << "Name: " << unit.getName() << std::endl;
    out << "Кол-во HP: " << unit.getHitPointsLimit() << std::endl;
    out << "Сила урона: " << unit.getDamage() << std::endl;
    out << "Кол-во HP после атаки: " << unit.getHitPoints() << std::endl;
}