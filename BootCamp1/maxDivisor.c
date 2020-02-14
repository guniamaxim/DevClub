#include <stdio.h>

int main() {
    int integer;
    
    scanf("%d", &integer);
    
    for ( int i = integer - 1; i > 1; i-- ) {
        if ( integer % i == 0 ) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", 0);
    
    return 0;
}
    