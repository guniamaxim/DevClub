void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0, rot = size - 1; col < size; col++, rot-- ) {
        for ( int row = 0; row < size; row++ ) {
            target[row][col] = source[rot][row];
        }
    }
}
