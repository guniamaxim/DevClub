#include <stdio.h>

int fibonacci(int n) {
    if ( n > 1 ) {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    return n;
}
int main() {
    int a;
    
    scanf("%d", &a);
    printf("%d\n", fibonacci(a));
    
    return 0;
}