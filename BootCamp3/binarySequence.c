#include <stdio.h>

int main() {
    char symbol;
    int zero = 0;
    int one = 0;
    int exchanges = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%c", &symbol) == 1; ) {
        if ( symbol == '0' ) {
            zero += 1;
        } else {
            one += 1;
        }
    }
    fclose(in);
    in = fopen("task.in", "r");
    for ( int i = 0; i < zero; i++ ) {
        fscanf(in, "%c", &symbol);
        if ( symbol != '0' ) {
            exchanges += 1;
        }
    }
    fprintf(out, "%d\n", exchanges);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
