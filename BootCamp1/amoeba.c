#include <stdio.h>

int main() {
    int amoeba;
    int hour;
    
    scanf("%d %d", &amoeba, &hour);
    
    for ( int i = 1; i <= hour; i++ ) {
        printf("%dh => %d amoeba(s)\n", i, amoeba*2);
        amoeba *=2;
    }
    
    return 0;
}
    