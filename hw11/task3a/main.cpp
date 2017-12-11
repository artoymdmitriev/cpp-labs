//3А. Напишите функцию, которая серией перестановок помещает в начало массива
//1) минимальный элемент
//2) максимальный элемент

#include <iostream>

int length;

void maxUp(int*);
void minUp(int*);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[length];
    cout << "Enter the length of an array: ";
    cin >> length;
    cout << "Enter values: ";
    for(int i = 0; i < length; i++) {
        cin >> array[i];
    }

    cout << "Max value on top: " << endl;
    maxUp(array);
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }

    cout << "Min value on top: " << endl;
    minUp(array);
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
    return 0;
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