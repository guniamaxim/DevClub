#include <stdio.h>

int main() {
    int age;

    scanf("%d\n", &age);

    if ( age > 21 ) {
        printf("yes\n");
    } 
    if ( age < 21 ) {
        printf("no\n");
    }

    return 0;
}
    