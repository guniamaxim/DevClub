#include <stdio.h>

int main() {
    int size;
    int result;
    
    scanf("%d", &size);
    
    for ( int row = size; row > 0; row-- ) {
        for ( int col = size - 1; col > 0; col-- ){
            result = row*size - col;
            printf("%d ", result);
        }
        result = row*size;
        printf("%d\n", result);
    }
    
    return 0;
}   
    