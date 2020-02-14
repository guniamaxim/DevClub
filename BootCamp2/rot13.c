#include <stdio.h>

#define LIMIT 101

void strRot13(char str[]) {
    for ( int i = 0, symbol = str[i]; str[i]; i++, symbol = str[i] ) {
        if ( symbol >= 'a' && symbol <= 'z' ) {
            if ( symbol > 'm' ) {
                str[i] -= 'n' - 'a';
            } else {
                str[i] += 'n' - 'a';
            }
        } else if ( symbol >= 'A' && symbol <= 'Z' ) {
            if ( symbol > 'M' ) {
                str[i] -= 'N' - 'A';
            } else {
                str[i] += 'N' - 'A';
            }
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT];

    fscanf(in, "%100s", str);
    strRot13(str);
    fprintf(out, "%s\n", str);
    fclose(in);
    fclose(out);
    return 0;
}
