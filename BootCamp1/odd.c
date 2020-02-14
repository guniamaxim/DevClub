#include <stdio.h>

int main() {
    int integral;
    
    scanf("%d", &integral);
    
    if ( integral % 2 == 0 ) {
        integral -= 1;
    }
    
    for ( int i = 1; i < integral; i += 2 ) {
        printf("%d ", i);
    }
    
    printf("%d\n", integral);
    
    return 0;
}
    