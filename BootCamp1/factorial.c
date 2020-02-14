#include <stdio.h>

int main() {
    int integer;
    int result = 1;
    
    scanf("%d", &integer);
    
    for ( int i = 1; i <= integer; i++ ) {
        result *= i;
    }
    if ( integer < 0 ) {
        result = -1;
    }
    
    printf("%d\n", result);
    
    return 0;
}
