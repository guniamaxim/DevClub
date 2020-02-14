#include <stdio.h>

void arrayAbs(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
        fprintf(out, "%d ", array[i]);
    }
    if ( array[last] < 0 ) {
        array[last] *= -1;
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 100;
    int array[size];
    
    fscanf(in, "%d", &size);
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    arrayAbs(out, array, size);
    fclose(in);
    fclose(out);
    return 0;
}

Условие задачи
В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
Прочитать последовательность в массив.
Найти все отрицательные числа и заменить их положительными, равными по модулю.
Результирующий массив вывести в task.out.

Пример ввода
10
10 -20 30 40 -50 -60 70 80 90 -100
Пример вывода
10 20 30 40 50 60 70 80 90 100