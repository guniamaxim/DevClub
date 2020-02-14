#include <stdio.h>

#define SIZE 3

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0, rot = size - col - 1; row < size; row++ ) {
            target[col][row] = source[row][rot];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = {3, 6, 9, 2, 5, 8, 1, 4, 7};
    int new[SIZE][SIZE];

    for ( int i = 0; i < SIZE; i++ ) {
        for (int j = 0; j < SIZE - 1; j++ ) {
            printf("%2d ", matrix[i][j]);
        }
        printf("%2d\n", matrix[i][SIZE-1]);
    }

    printf("____________________\n");

    matrixRotate90(new, matrix, SIZE);

    for ( int i = 0; i < SIZE; i++ ) {
        for (int j = 0; j < SIZE - 1; j++ ) {
            printf("%2d ", new[i][j]);
        }
        printf("%2d\n", new[i][SIZE-1]);
    }
    return 0;                        
}