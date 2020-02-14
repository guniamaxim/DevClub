#include <stdio.h>

int main() {
    int plain1, plain2, encrypted1, encrypted2, length, keyA, keyB, encrypted, plain;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
    keyB = encrypted1 - plain1 * keyA;
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &encrypted);
        plain = (encrypted - keyB) / keyA;
        printf("%d ", plain);
    }
    scanf("%d", &encrypted);
    plain = (encrypted - keyB) / keyA;
    printf("%d\n", plain);
    
    return 0;
}
    