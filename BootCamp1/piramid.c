#include <stdio.h>

int main() {
    int total;
    int rows;
    int cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    
    if ( rows < cols ) {
        rows = cols;
    }
    
    for ( int row = rows + 1; row <= total; row ++ ) {
        for ( int col = cols + 1; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", row);
    }
    
    return 0;
}
    