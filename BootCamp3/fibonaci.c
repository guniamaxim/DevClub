#include <stdio.h>

int main() {
    int num, result;
    int first = 0;
    int second = 1;
    
scanf("%d", &num);
    if ( num == 0 ) {
        printf("%d\n", num);
    } else if ( num == 1 || num == -1 ) {
        printf("%d\n", second);
    } else if ( num < 0 ) {
        for ( int i = num + 1; i < 0; i++ ) {
            result = first - second;
            first = second;
            second = result;
        }
        printf("%d\n", result);
    } else {
        for ( int i = 1; i < num; i++ ) {
            result = first + second;
            first = second;
            second = result;
        }
        printf("%d\n", result);
    }
    
    return 0;
}

Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
Пример ввода
8
Пример вывода
21