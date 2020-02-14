void arrayPrintReversed(int array[], int size) {
int last = size - 1;

    for ( int i = last; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

Условие задачи
Написать функцию:
void arrayPrintReversed(int array[], int size)
Распечатать массив на экран в строку через пробел в обратном порядке.