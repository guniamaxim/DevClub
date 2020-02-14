#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char letter;
    
    for ( ; fscanf( in, "%c", &letter) > 0; ){
        if ( letter >= 'a' && letter <= 'z'){
            letter += 'A' - 'a';
        }
        fprintf(out, "%c", letter);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
