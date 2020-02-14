#include <stdio.h>

int main() {
    int quantity, max, sequence;
    
    scanf("%d%d", &quantity, &max);
     
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &sequence);
        if ( sequence > max ) {
            max = sequence;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
    