#include <stdio.h>

#define SIZE 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump, cell;
    long long unsigned array[SIZE];
    
    fscanf(in, "%d%d", &maxJump, &cell);
    fclose(in);
    
    for ( int i = 0; i < maxJump && i < cell; i++ ) {
        array[i] = 1 << i;
    }
    
    for ( int i = maxJump; i < cell; i++ ) {
        array[i] = 0;
        
        for ( int j = i - maxJump; j < i; j++ ) {
            array[i] += array[j];
        }
    }
    
    fprintf(out, "%llu\n", array[cell-1]);
    fclose(out);
    
    return 0;
}