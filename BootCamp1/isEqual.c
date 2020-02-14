#include <stdio.h>

int main() {
    int comp1;
    int comp2;
    
    scanf("%d %d", &comp1, &comp2);
    if ( comp1 == comp2 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
    