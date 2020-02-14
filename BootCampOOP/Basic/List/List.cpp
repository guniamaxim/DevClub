#include <iostream>
#include <cstdlib>
#include "List.h"

List::List (int capacityIn, double multiplierIn) {
    capacity = capacityIn;
    multiplier = multiplierIn;
    array = (int*) malloc(capacity * sizeof(int));
    if ( array == NULL ){
        throw OutOfMemoryException ();
    }
    current = 0;
}

List::~List () {
    free(array);
};

int List::size() const {
    return current;
}

int List::max_size() const {
    return capacity;
}

void List::erase(int index) {
    if ( current == 0 ) {
        throw ZeroLenException();
    }
    
    if ( index <= current ) {
        for ( int i = index, j = index + 1; i < current; i++, j++ ) {
            array[i] = array[j];
        }
        current -= 1;
    }
}

void List::insert(int value, int index) {
    if ( capacity <= current) {
        throw OutOfMemoryException();
    }
    for ( int i = current - 1, j = current; i >= index; i--, j-- ) {
        array[j] = array[i];
    }
    array[index] = value;
    current += 1;
}

int List::find(int value) const {
    int finded_index = -1;
    
    if ( current == 0 ) {
        throw ZeroLenException();
    }
    
    for ( int i = 0; i < current; i++ ) {
        if ( array[i] == value ) {
            std::cout << "Величина элемента: " << value << " Индекс элемента:  " << i << std::endl;
            finded_index = i;
        }
    }
    if ( finded_index == -1 ) {
        std::cout << "Не найдено!" << std::endl;
    }
    return finded_index;
}

void List::push_back(int value) {
    int newCurrent = current + 1;
    
    if ( newCurrent > capacity ) {
        int newCapacity = capacity * multiplier;
        if ( newCapacity == capacity ) {
            newCapacity += 1;
        }
        int* newArray = (int*) realloc(array, newCapacity * sizeof(int));
        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }
    capacity = newCapacity;
    array = newArray;
    }
    current = newCurrent;
    array[current - 1] = value;
}


int List::pop_back() {
    if (current == 0 ) {
        throw ZeroLenException();
    }
    current -= 1;
    return array[current];
}

void List::sort() {
    for ( int first = 0, last = current - 1; first < last; last-- ) {
    for ( int i = 0, j = i + 1; j <= last; i++, j++ ) {
        if ( array[j] < array[i] ) {
            int temp = array[j];
            
            array[j] = array[i];
            array[i] = temp;
        }
    }
    }
}

int List::operator[](int index) const {
    if ( current < index || index < 0 ) {
        throw OutOfMemoryException();
    }
    return array[index];
}

bool List::operator==(const List& other) const {
    return capacity == other.capacity && multiplier == other.multiplier;
}

bool List::operator!=(const List& other) const {
    return !operator == (other);
}

std::ostream& operator<< (std::ostream& out, const List& list) {
    int last = list.size() - 1;
    
    out << "capacity = " << list.max_size() << std::endl;
    out << "current = " << list.size() << std::endl;
    for (int i = 0; i < last; i++ ) {
            out << list[i] << ' ';
    }
    out << list[last];
    return out;
}