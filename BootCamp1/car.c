#include <stdio.h>

int main() {
    int speed;
    int limit;

    scanf("%d %d", &speed, &limit);
    if ( speed > limit ) {
        printf("violation\n");
    }
    if ( speed <= limit ) {
        printf("ok\n");
    }
    return 0;
}
    