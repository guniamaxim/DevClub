#include <stdio.h>

int main() {
    int quantity, min, sequence;
    
    scanf("%d%d", &quantity, &min);
     
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &sequence);
        if ( sequence < min ) {
            min = sequence;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
    