#include <stdio.h>

int main() {
    int lastNum;
    
    scanf("%d", &lastNum);
    
    for ( int i = 1; i < lastNum; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", lastNum);
    
    return 0;
}
    Условие задачи
Считать с клавиатуры целое положительное число.
Вывести в строку через пробел по порядку все натуральные числа, не превышающие заданное.
Пример ввода
5
Пример вывода
1 2 3 4 5