#include <stdio.h>

int main() {
    typedef struct {
        char name[10];
        int  age;
    } Animal;

    Animal hamster    = {"Bobby", 3};
    Animal snake      = {"Alyona", 12};
    Animal animals[2] = {hamster, snake};

    printf("%d\n", hamster.age);
    printf("%d\n", animals[0].age);

    return 0;
}