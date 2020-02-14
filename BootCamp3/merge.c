#include <stdio.h>

#define SIZE 10

void merge(int array[], int lo, int mid, int hi) {
    int buffer[hi];
    int i = lo;
    int j = mid;
    int k;
    
    for ( k = 0; j < hi && i < mid; k++ ) {
        if ( array[i] < array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    for ( int i = lo, j = 0; i < hi; i++, j++ ) {
        array[i] = buffer[j];
    }
}


int main() {
    int array[] = { 0, 9, 6, 5, 1, 8, 2, 4, 7, 3 };
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);    
    }
    printf("\n");

    merge(array, 0, 3, 7);

    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);    
    }
    printf("\n");

    return 0;
}

void merge(int array[], int lo, int mid, int hi)
Слияние двух сортированных подмассивов в один отсортированный подмассив.
Первый подмассив от lo до mid не включая mid
Второй подмассив от mid до hi не включая hi