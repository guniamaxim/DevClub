#include <stdio.h>

int powerOf2(int exponent) {
    return 1 << exponent;
}

int main() {
    int exponent;

    scanf("%d", &exponent);

    printf("%d\n", powerOf2(exponent));

    return 0;
}

Условие задачи
int powerOf2(int exponent)
Возвести 2 в данную целую неотрицательную степень.
Воспользоваться побитовыми операциями.