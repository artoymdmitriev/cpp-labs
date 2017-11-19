#include <iostream>

void fillArray(int*, int);
void printArrayAsc(int*, int);
void printArrayDesc(int*, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int length = 5;
    cout << "Enter " << length << " numbers: ";
    int array[length];
    fillArray(array, length);

    printArrayAsc(array, length);
    printArrayDesc(array, length);
    system("pause");
    return 0;
}

void fillArray(int *array, int length) {
    for(int i = 0; i < length; i++) {
        cin >> array[i];
    }
}

void printArrayAsc(int *array, int length) {
    cout << "Ascending order: " << endl;
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
}

void printArrayDesc(int *array, int length) {
    cout << "Descending order: " << endl;
    for(int i = length - 1; i >= 0; i--) {
        cout << array[i] << endl;
    }
}