#include <stdio.h>

int gcd(int first, int second) {
    if ( first == 0 ) {
        return second;
    }
    return gcd(second%first, first);
}

int lcm(int first, int second) {
    return first / gcd(first, second) * second;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int first, second;
    
    fscanf(in, "%d %d", &first, &second);
    fprintf(out, "%d\n", lcm(first, second));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
