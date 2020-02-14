#include <stdio.h>

int main() {
    int even, base;
    int power = 1;
    int times;
    
    scanf("%d %d", &even, &base);
    if ( even < 0 ) {
        even *= -1;
        printf("-");
    }
    if ( base == 10 ) {
        printf("%d\n", even);
    } else {
        for ( int i = even; i >= base; i /= base ) {
            power *= base;
        }
        for ( times = 0; power >= base; power /= base ) {
            times = even / power;
            even -= times * power;
            if ( times >= 10 ) {
                printf("%c", times+55);
            } else {
                printf("%d", times);
            }
        }
        times = even / power;
        if ( times >= 10 ) {
            printf("%c\n", times+55);
        } else {
            printf("%d\n", times);
        }
    }
    return 0;
}
Вбросить
Условие задачи
Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 36).
Вывести в консоль число, записанное в новой системе счисления.
В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
Для решения можно пользоваться только циклами. Задача решается без массивов. Использовать только тип int.

Пример ввода
-255 16
Пример вывода
-FF