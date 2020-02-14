#include <stdio.h>

// struct {         //anonymus struct
//  char name[10];
//  int age;
//  char sex;
// } human;         //global variable "human"

// struct Human {   //global type "struct Human"
//  char name[10];
//  int age;
//  char sex;
// };

// typedef struct Human Human;

typedef struct {
    char name[10];
    char color[10];
} Car;

typedef struct {
    char name[10];
    char sex;
    int age;
    Car car;
} Human;

void humanPrint(Human *human) {
    printf("Name - %s\n", (*human).name);   //instead of "(* )." use "->"  
    printf("Age  - %d\n", human->age);
    printf("Sex  - %c\n", human->sex);
    printf("Car:\n   name  - %s\n", human->car.name);
    printf("   color - %s\n\n", human->car.color);
}

void humanBirthday(Human * human) {
    human->age += 1;
    printf("%s birthday!\n\n", human->name);
}

void stringCopy(char *source, char *destination) {
    for ( ; *source != 0; source++, destination++ ) {
        *destination = *source;
    }
    *destination = 0;
}

int main() {
    Human homodrives = {"Vasya", 21, 'm'};  
    Human newman = {"Newman", 0, '@', {"Chicco", "blue"}};
    Car bmw = {"BMW", "red"};
    Human kindergarten[100];

    kindergarten[5] = newman;
    humanPrint(&kindergarten[5]);

    homodrives.car = bmw;

    humanBirthday(&newman);
    newman.sex = 'f';
    stringCopy("pink", newman.car.color);

    humanPrint(&homodrives);
    humanPrint(&newman);

    printf("%lu\n", sizeof(Car));
    printf("%lu\n", sizeof(Human));

    return 0;
}