#include <stdio.h>

#define LIMIT 101

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char string[LIMIT];
    
    fscanf(in, "%s", string);
    fclose(in);
    
    for ( int i = 0, j = strLen(string) - 1; i < j; i++, j-- ) {
        int temp = string[i];
        
        string[i] = string[j];
        string[j] = temp;
    }
    
    fprintf(out, "%s\n", string);
    fclose(out);
    
    return 0;
}
Условие задачи
В файле task.in дана строка длиной не более 100 символов.
Прочитать строку в память и произвести ее реверс.
Результат вывести в task.out.

Пример ввода
hello
Пример вывода
olleh