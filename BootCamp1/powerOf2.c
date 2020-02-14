#include <stdio.h>

int main() {
    int power = 1;
    int maxPower;
    
    scanf("%d", &maxPower);
    
    for (int i = 0; i < maxPower; i++) {
        printf("%d ", power);
        power *= 2;
    }
    printf("%d\n", power);
    
    return 0;
}
    