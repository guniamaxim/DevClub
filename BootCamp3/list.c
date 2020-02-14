#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* array;
    int size;
} List;

void init(List* list, int size) {
    list->size = size;
    list->array = (int*)malloc(list->size*sizeof(int));
    printf("list created at %p\n", list->array);
}

void kill(List* list) {
    list->size = 0;
    free(list->array);
    printf("list destroyed...\n");
}

void append(List* list) {
    list->size += 1;
    list->array = (int*)realloc(list->array, list->size*sizeof(int));
}

void appendFew(List* list, int quantity) {
    list->size += quantity;
    list->array = (int*)realloc(list->array, list->size*sizeof(int));
}

void unset(List* list) {
    if ( list->size - 1 == 0 ) {
        printf("Unset error...\n");
        return;
    }
    list->size -= 1;
    list->array = (int*)realloc(list->array, list->size*sizeof(int));
}

void unsetFew(List* list, int quantity) {
    if ( list->size - quantity <= 0 ) {
        printf("Unset error. Size: %d\n", list->size);
        return;
    }
    list->size -= quantity;
    list->array = (int*)realloc(list->array, list->size*sizeof(int));
}

void insert(List* list, int quantity, int position, int value) {
    int last = list->size - 1;

    list->size += quantity;
    list->array = (int*)realloc(list->array, list->size*sizeof(int));
    
    for ( int i = last; i >= position; i-- ) {
        list->array[i+quantity] = list->array[i];
    }
    for ( int i = position; i < position + quantity; i++ ) {
        list->array[i] = value;
    }
}

void erase(List* list, int quantity, int position) {
    int last = list->size - 1 - quantity;
    if ( list->size - quantity <= 0 ) {
        printf("Unset error. Size: %d\n", list->size);
        return;
    }

    for ( int i = position; i < last; i++ ) {
        list->array[i] = list->array[i+quantity];
    }

    list->size -= quantity;
    list->array = (int*)realloc(list->array, list->size*sizeof(int));
}

// TODO:
// int find(List* list, int needle);
// void replace(List* list, int matches[], int value);
// void sort(List* list);
// void abs(List* list);
// use paranoid 80 lvl.

//+ bonus:
// void shuffle(List* list);


void arrayFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = i;
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    List list;

    init(&list, 10);
    printf("initial list:\n");
    arrayFill(list.array, list.size);
    arrayPrint(list.array, list.size);

    printf("appending 10 elems:\n");
    for ( int i = 0; i < 10; i++ ) {
        append(&list);
    }
    arrayPrint(list.array, list.size);

    printf("unsetting 5 elems:\n");
    for ( int i = 0; i < 5; i++ ) {
        unset(&list);
    }
    arrayPrint(list.array, list.size);

    printf("appending 10 elems:\n");
    appendFew(&list, 10);
    arrayPrint(list.array, list.size);

    printf("unsetting 5 elems:\n");
    unsetFew(&list, 5);
    arrayPrint(list.array, list.size);

    printf("inserting 5 elems:\n");
    insert(&list, 5, 6, 42);
    arrayPrint(list.array, list.size);

    printf("erasing 5 elems:\n");
    erase(&list, 5, 4);
    arrayPrint(list.array, list.size);

    kill(&list);

    return 0;
}




