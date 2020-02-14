#include <stdio.h>

int main() {
    int discriminant;

    scanf("%d", &discriminant);

    if ( discriminant > 0 ) {
        printf("2\n");
    }
    if ( discriminant < 0 ) {
        printf("0\n");
    }
    if ( discriminant == 0 ) {
        printf("1\n");
    }

    return 0;
