#include <iostream>
#include <ctime>

void fillArray(int*, int);
int getRandomNumber();
int maxValue(int*, int);
int minValue(int*, int);
void printArray(int*, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));

    const int length = 10;
    int array[length];
    fillArray(array, length);

    printArray(array, length);
    cout << "Max value is: " << maxValue(array, length) << endl;
    cout << "Min value is: " << minValue(array, length) << endl;
    system("pause");
    return 0;
}

void fillArray(int *array, int length) {
    for(int i = 0; i < length; i++) {
        array[i] = getRandomNumber();
    }
}

int getRandomNumber() {
    return rand() + 1;
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

void printArray(int *array, int length) {
    cout << "Array:" << endl;
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
}