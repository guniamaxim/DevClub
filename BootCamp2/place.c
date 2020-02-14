#include <stdio.h>

int int main() {
    int a;
    int count;
    
    scanf("%d", &a);
    
    if ( a <= 0) {
        count += 1;
    }
    
    for ( int i = a; i != 0; i /= 10 ){
            count += 1;
        }
        printf("%d\n", count);
        
    return 0;
}
Условие задачи
Считать с клавиатуры целое число.
Вывести на экран количество знакомест, нужных для вывода этого числа.

Пример ввода
123
Пример вывода
3