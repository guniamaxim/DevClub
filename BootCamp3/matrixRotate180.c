#include <stdio.h>

#define SIZE 4

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, newRow = size - 1 - row, newCol = size - 1; col < size; col++, newCol-- ) {
            target[newCol][newRow] = source[col][row];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int new[SIZE][SIZE];

    for ( int i = 0; i < SIZE; i++ ) {
        for (int j = 0; j < SIZE - 1; j++ ) {
            printf("%2d ", matrix[i][j]);
        }
        printf("%2d\n", matrix[i][SIZE-1]);
    }

    printf("____________________\n");

    matrixRotate180(new, matrix, SIZE);

    for ( int i = 0; i < SIZE; i++ ) {
        for (int j = 0; j < SIZE - 1; j++ ) {
            printf("%2d ", new[i][j]);
        }
        printf("%2d\n", new[i][SIZE-1]);
    }
    return 0;                        
}
