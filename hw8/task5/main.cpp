#include <iostream>

void fillArray(int*, int);
void findMaxValues(int*, int);
void findMinValues(int*, int);
int maxValue(int*, int);
int minValue(int*, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int length = 5;
    int array[length];
    fillArray(array, length);
    findMaxValues(array, length);
    findMinValues(array, length);
    system("pause");
    return 0;
}

void fillArray(int *array, int length) {
    cout << "Enter " << length << " numbers: ";
    for(int i = 0; i < length; i++) {
        cin >> array[i];
    }
}

void findMaxValues(int* array, int length) {
    int max = maxValue(array, length);
    cout << "Max value is: " << max << ". Index (indices): ";
    for(int i = 0; i < length; i++) {
        if(array[i] == max) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void findMinValues(int* array, int length) {
    int min = minValue(array, length);
    cout << "Min value is: " << min << ". Index (indices): ";
    for(int i = 0; i < length; i++) {
        if(array[i] == min) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int maxValue(int *array, int length) {
    int max = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] > max) max = array[i];
    }
    return max;
}

int minValue(int *array, int length) {
    int min = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] < min) min = array[i];
    }
    return min;
}