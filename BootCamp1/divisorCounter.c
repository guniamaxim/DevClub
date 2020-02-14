#include <stdio.h>

int main() {
    int counter;
    int divisor = 1;
    
    scanf("%d", &counter);
    
    for ( int i = 1; i < counter; i++ ) {
        if ( counter % i == 0 ) {
            divisor += 1;
        }
    }
    printf("%d\n", divisor);
    
    return 0;
}
    