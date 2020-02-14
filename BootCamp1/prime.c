#include <stdio.h>
    
int isPrime(int n){
    if ( n < 2 ) {
        return 0;
    }
    for ( int i = 2; i < n; i++ ) {
        if ( n % i == 0 && i !=n ) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    int count = 0;
    
    scanf("%d", &num);
    
    if ( num < 1 ) {
        printf("-1\n");
    }
    for (int i = 2; count < num; i++) {
        if ( isPrime(i) ) {
            count += 1;
        }
        if ( count == num ) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
    