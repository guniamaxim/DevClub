#include <stdio.h>

int main() {
    int dividend;
    int divider;

    scanf("%d %d", &dividend, &divider);
    if ( dividend % divider == 0 ) {
        printf("yes\n" );
    } else {
        printf("no\n");
    }
    
    return 0;
}
    