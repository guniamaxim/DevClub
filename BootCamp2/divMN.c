#include <stdio.h>

int gcd(int m, int n) {
    if ( m == 0 ) {
        return n;
    }
    return gcd(n%m, m);
}

int lcm(int m, int n) {
    return m / gcd(m, n) * n;
}

int main() {
    int min, max, m, n;
    int dividend, divisor;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    dividend = lcm(m, n);
    divisor = min % dividend;
    
    if ( divisor > 0 ) {
        min += dividend - divisor;
    } else {
        min -= divisor;
    }
    for ( int i = min; i <= max; i += dividend ) {
        printf("%d\n", i);
    }
    
    return 0;
}
Условие задачи
Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.

Пример ввода
0 12 2 3
Пример вывода
0
6
12