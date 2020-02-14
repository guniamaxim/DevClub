#include "Paper.h"
#include "Pen.h"

Paper::Paper(int maxSymbolsIn){
    maxSymbols = maxSymbolsIn;
    symbols = 0;
    
}

Paper::~Paper(){
    
}

int Paper::getMaxSymbols() const {
    return maxSymbols;
}

int Paper::getSymbols() const {
    return symbols;
}

void Paper::addContent(const std::string& message) {
    if (symbols >= maxSymbols){
        throw OutOfSpace();
    }
    content += message;
    symbols += 1;
}

void Paper::show() const{
    std::cout << content << std::endl;
}