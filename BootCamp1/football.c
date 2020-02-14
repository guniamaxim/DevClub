#include <stdio.h>

int main() {
    int quantityH;
    int quantityA;

    scanf("%d %d", &quantityH, &quantityA);

    if ( quantityH > quantityA ) {
        printf("Home team wins\n");
    } else if ( quantityA > quantityH ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}
    