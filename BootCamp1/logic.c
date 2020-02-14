#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d and %d is %d\n", a, b, a&&b);
    printf("%d or %d is %d\n", a, b, a||b);
    
    return 0;
}
    