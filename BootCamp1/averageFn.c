#include <stdio.h>

int average(int a, int b) {
    
    return (a + b) / 2-((a + b) % 2) / 2;
}
    
    
int main(){
    int a,b;

    scanf("%d %d", &a, &b);
    printf("%d\n", average(a,b));

    return 0;
}
