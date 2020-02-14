#include <stdio.h>

int main() {
    int baseNum;
    int maxPower;
    int power = 1;
    
    scanf("%d %d", &baseNum, &maxPower);
    
    for ( int i = 0; i < maxPower; ++i ) {
        printf("%d ", power);
        power *= baseNum;
    }
    printf("%d\n", power);
    
    return 0;
}
    