#include <stdio.h>

int main() {
    int parol;
    
    for ( int i = 0; i < 5; i++ ) {
        scanf("%d", &parol);
        if ( parol == 1488 ) {
            printf("accepted\n");
            return 0;
        } else {
            printf("incorrect password\n");
        }
    }
    printf("denied\n");
    
    return 0;
}
    