#include <stdio.h>

int main() {
    int tel, minutes;

    scanf("%d %d", &tel, &minutes);

    if ( tel == 101 || tel == 102 || tel == 103 || tel == 104 || tel == 112 ) {
        printf("0$\n");
    } else if ( tel >= 100 && tel <= 999 ) {
        printf("%d$\n", 40*minutes);
    } else if ( tel >= 1000000 && tel <= 9999999 ) {
        printf("%d$\n", 1*minutes);
    } else {
        printf("-1\n");
    }

    return 0;
}
    