#include "Pen.h"
#include "Paper.h"

int main() {
 
    Pen pen(13);
    Paper paper;
    
    try {
        pen.write(paper, "Hello, world!");
    } catch (OutOfInk) {
        std::cout << "" << std::endl;
        std::cout << "Не хватает чернил" << std::endl;
    } catch (OutOfSpace) {
        std::cout << "" << std::endl;
        std::cout << "Лист заполнен" << std::endl;
    }
    paper.show();
    std::cout << "Кол-во написаных символов: " << paper.getSymbols() << std::endl;
    std::cout << "" << std::endl;
    
    std::cout << "Заправляем ручку!" << std::endl;
    std::cout << "" << std::endl;
    pen.refill();
    
    try {
        pen.write(paper, "Hello, world!");
    } catch (OutOfInk) {
        std::cout << "" << std::endl;
        std::cout << "Не хватает чернил" << std::endl;
    } catch (OutOfSpace) {
        std::cout << "" << std::endl;
        std::cout << "Лист заполнен" << std::endl;
    }
    
    std::cout << "Кол-во написаных символов: " << paper.getSymbols() << std::endl;
    
    paper.show();
    std::cout << "" << std::endl;
   
    return 0;
}


















// Ручка.
// Каждая ручка имеет максимальный запас чернил (inkCapacity) и текущее количество чернил (inkAmount).
// Ручка пишет по бумаге. За каждый написанный символ из текущего количества чернил ручки списывается одна единица чернил. Без чернил ручка писать не может.
// Если в ручке недостаточно чернил, чтобы написать все сообщение, записывается столько символов, на сколько хватает чернил.
// Ручку можно перезаправить до максимального запаса чернил.

// Бумага.
// Каждый лист бумаги может вместить определенное количество символов (maxSymbols). Так же, в произвольный момент времени можно узнать, сколько символов уже написано на листе (symbols).
// На чистом листе бумаги нет ни одного символа. КО.
// Если на лист бумаги невозможно поместить все сообщение, необходимо записать столько символов, сколько может вместить лист.
// На заполненный лист бумаги невозможно ничего записать.
// Всегда есть возможность прочитать текст, написанный на листе бумаги.

// Примечания:
// ознакомиться с методами объектов std::string. Особое внимание уделить методам size(), length() и substr().