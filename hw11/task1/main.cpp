#include <iostream>

int length = 5;

void maxUp(int*);
void minUp(int*);
void sort(int*, void (*f)(int*));

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[length] = {1, 2, 3, 4, 5};
    sort(array, maxUp);
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
    return 0;
}

void sort(int* array, void (*f)(int*)) {
    for(int i = length - 1; i >= 0; i-- ) {
        f(array);
    }
}

void maxUp(int *array) {
    for(int i = length - 1; i > 0; i--) {
        if(array[i] > array[i] - 1) {
            int temp = array[i - 1];
            array[i - 1] = array[i];
            array[i] = temp;
        }
    }
}

void minUp(int *array) {
    for(int i = length - 1; i > 0; i--) {
        if(array[i] < array[i - 1]) {
            int temp = array[i - 1];
            array[i - 1] = array[i];
            array[i] = temp;
        }
    }
}