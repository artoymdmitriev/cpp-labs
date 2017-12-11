//3B. Напишите функцию для сортировки массива методом пузырька
//1) по возрастанию
//2) по убыванию

#include <iostream>

int length;

void sortDesc(int*);
void sortAsc(int*);

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

    cout << "Descending sort: " << endl;
    sortDesc(array);
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }

    cout << "Ascending sort: " << endl;
    sortAsc(array);
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
    return 0;
}

void sortDesc(int* array) {
    int sortedElements = 0;
    for(int x = 0; x < length; x++) {
        for(int i = length - 1; i > sortedElements; i--) {
            if(array[i] > array[i - 1]) {
                int temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
            }
        }
    }
}

void sortAsc(int* array) {
    int sortedElements = 0;
    for(int x = 0; x < length; x++) {
        for(int i = length - 1; i > sortedElements; i--) {
            if(array[i] < array[i - 1]) {
                int temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
            }
        }
    }
}