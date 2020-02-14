#include <stdio.h>

#define SIZE 10

int main() {
    FILE *in = fopen("task.in", "w");
    FILE *out = fopen("task.out", "r");
    int array[SIZE];
    
    for ( int index = 0; index < SIZE; index++ ) {
        fscanf(in, "%d", &array[index]);
    }
    for (int index = 0; i < SIZE - 1; index++ ) {
        fprintf(out, "%d", array[index]);
    }
    fprintf(out, "%d\n", array[SIZE - 1]);
    
    return 0;
}





Условие задачи
Считать в массив последовательность чисел длиной 10 из файла task.in.
Записать его через пробел в файл task.out.

Пример ввода
10 20 30 40 50 60 70 80 90 100
Пример вывода
10 20 30 40 50 60 70 80 90 100