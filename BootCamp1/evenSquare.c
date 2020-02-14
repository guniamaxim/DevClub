#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( max % 2 != 0) {
        max -= 1;
    }
    
    for ( ; min < max; min++ ) {
        if ( min % 2 == 0 ) {
            printf("%d\n", min*min);
        }
    }
    
    printf("%d\n", max*max);
    
    return 0;
}
    