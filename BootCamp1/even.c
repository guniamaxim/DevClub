#include <stdio.h>

int main() {
    int integral;
    
    scanf("%d", &integral);
    
    lastNum = integral - integral % 2;
    
    for ( int i = 0; i < integral; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", integral);
    
    return 0;
}
    