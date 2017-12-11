//3С. Напишите функцию, которая сортирует массив методом пузырька либо
// по возрастанию, либо по убыванию в зависимости от значения аргумента

#include <iostream>

int length;

void sort(int*, bool);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[length];
    bool order;
    cout << "Enter the length of an array: ";
    cin >> length;
    cout << "Enter values: ";
    for(int i = 0; i < length; i++) {
        cin >> array[i];
    }
    cout << "Enter the sort order: 1 for descending, 0 for ascending" << endl;
    cin >> order;
    cout << "Sorted array: " << endl;
    sort(array, order);
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }

    return 0;
}

void sort(int* array, bool arg) {
    int sortedElements = 0;
    for(int x = 0; x < length; x++) {
        for(int i = length - 1; i > sortedElements; i--) {
            if((array[i] > array[i - 1]) == arg) {
                int temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
            }
        }
    }
}