#include <iostream>

void printArrayAsc(int*, int);
void printArrayDesc(int*, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int length = 5;
    cout << "Enter 5 numbers: ";
    int array[length];
    for(int i = 0; i < length; i++) {
        cin >> array[i];
    }
    printArrayAsc(array, length);
    printArrayDesc(array, length);
    return 0;
}

void printArrayAsc(int *array, const int length) {
    cout << "Ascending order: " << endl;
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
}

void printArrayDesc(int *array, const int length) {
    cout << "Descending order: " << endl;
    for(int i = length - 1; i >= 0; i--) {
        cout << array[i] << endl;
    }
}