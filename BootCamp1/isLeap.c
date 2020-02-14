#include <stdio.h>

int main() {
    int quantity;
    
    scanf("%d\n", &quantity);
    
    if ( quantity == 366 ) {
        printf("yes\n");
    } else if ( quantity == 365 ) {
        printf("no\n");
    } else {
        printf("Invalid param\n");
    }
    
    return 0;
}
    