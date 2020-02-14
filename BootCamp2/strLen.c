#include <stdio.h>

#define LIMIT 101

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    char string[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", string);
    fclose(in);
    fprintf(out, "%d\n", strLen(string));
    fclose(out);

    return 0;
}

Условие задачи
В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
Прочитать строку в память и подсчитать ее длину.
Результат вывести в task.out.

Пример ввода
hello
Пример вывода
5