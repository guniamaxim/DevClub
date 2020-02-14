#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char letter;
    
    for ( ; fscanf(in, "%c", &letter) > 0; ){
        if ( letter >= 'A' && letter <= 'Z' ) {
            letter -= 'A' - 'a'; 
        }
        fprintf(out, "%c", letter);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
Вбросить
Условие задачи
В файле task.in дана последовательность символов.
Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out

Пример ввода
ABCD
Пример вывода
abcd