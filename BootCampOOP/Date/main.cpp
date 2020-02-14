#include "Date.h"


int main(int argc, char const *argv[]){
    
    try {
        Date date(29, 2, 2000);
        std::cout << date << std::endl;
    } catch (InvalidDate e) {
        std::cout << e.text << std::endl;
    }
    
    return 0;
}


