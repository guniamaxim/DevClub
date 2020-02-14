#include <stdio.h>

int main() {
    int presentA, previousA, lenght;
    
    scanf("%d %d", &lenght, &previousA);
    
    for ( int i = 1; i < lenght; i++, previousA = presentA ) {
        scanf("%d", &presentA);
        if ( presentA < previousA ) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");

    return 0;
}
    