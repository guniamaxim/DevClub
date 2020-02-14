#include "Pen.h"
#include "Paper.h"

Pen::Pen(int inkCapacityIn){
    inkCapacity = inkCapacityIn;
    inkAmount = inkCapacity;
}

Pen::~Pen(){
    
}

int Pen::getInkAmount() const{
    return inkAmount;
    
}

int Pen::getInkCapacity() const{
    return inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message){
    
    for (int i = 0; i < message.length(); i++) {
        if ( inkAmount == 0 ) {
            throw OutOfInk();
        }
        
        char c = message[i];
        std::string msg(1, c);
        paper.addContent(msg);
        
        inkAmount -= 1;
        
    }
}

void Pen::refill(){
    inkAmount = inkCapacity;
    
}