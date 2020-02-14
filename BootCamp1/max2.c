#include <stdio.h>

int main() {
    
    int a, b;
    
    scanf("%d%d/n", &a, &b);
    
    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }
    
    return 0;
}
