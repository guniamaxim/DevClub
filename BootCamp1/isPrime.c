int isPrime(int n){
    if ( n < 2 ) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0 && i !=n ) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int a;
    int count;

    scanf("%d", &a);

    if ( a < 1 ) {
        printf("-1\n", );
    }
    

    return 0;
}