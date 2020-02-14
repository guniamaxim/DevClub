#include <stdio.h>

int main() {
    int size;
    int counter = 0;
    
    scanf("%d", &size);
    
    for ( int row = 1; row <= size; row++ ) {
        for ( int col = 1; col < size; col++ ) {
            counter += 1;
            printf("%d ", counter);
        }
        counter += 1;
        printf("%d\n", counter);
    }
    return 0;
}
    