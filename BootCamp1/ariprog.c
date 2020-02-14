#include <stdio.h>

int main() {
    int member, step, quantity;
    
    scanf("%d %d %d", &member, &step, &quantity);
    
    for ( int i = 1; i < quantity; i++ ) {
        printf("%d ", member);
        member += step;
    }
    printf("%d\n", member );
    
    return 0;
}
    