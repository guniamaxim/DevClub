#include "List.h"

int main() { 

    List a;
    List b(50, 1.2);
    
    try {
        std::cout << a << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    try {
        std::cout << b << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "" << std::endl;
    
    
    for( int i = 0; i < 15; i++ ) {
        try{ 
            a.push_back(i);
        } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
        }
    }
    std::cout << "Заполнить массив элементами " << std::endl;
    try {
        std::cout << a << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "" << std::endl;
    
    try{ 
        a.push_back(22);
    }catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    } 
    std::cout << "Добавить элементы" << std::endl;    
    try {
        std::cout << a << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "" << std::endl;
    
    try{
        a.pop_back();
    } catch (ZeroLenException){
        std::cout << "Список пуст" << std::endl;
        return 0;
    }
    std::cout << "Забрать последний элемент " << std::endl;
    try {
        std::cout << a << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "" << std::endl;
    
    try {
        a.insert(111, 7);
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "Вставить элемент " << std::endl;
    try {
        std::cout << a << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "" << std::endl;
    
    std::cout << "Найти элемент" << std::endl;
    try{
        a.find(111);
    } catch (ZeroLenException){
        std::cout << "Список пуст" << std::endl;
        return 0;
    }
    std::cout << "" << std::endl;
    
    std::cout << "Сортировка" << std::endl;
    a.sort();
    try {
        std::cout << a << std::endl;
    } catch (OutOfMemoryException){
        std::cout << "Нехватка памяти" << std::endl;
    }
    std::cout << "" << std::endl;
    
    std::cout << "Проверка на равенство" << std::endl;
    if (a == b) {
        std::cout << "Равны!" << std::endl;
    } else {
        std::cout << "Неравны!" << std::endl;
    }
    std::cout << "" << std::endl;
    
    List c(11, 1);
    List d(10, 1);
    std::cout << "Проверка на неравенство" << std::endl;
    if (c != d) {
        std::cout << "Да-неравны!" << std::endl;
    } else {
        std::cout << "Нет-равны!" << std::endl;
    }
    
    return 0;
}