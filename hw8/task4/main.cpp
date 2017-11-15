#include <iostream>
#include <ctime>

int maxValue(int*, int);
int minValue(int*, int);
int maxNegativeValue(int*, int);
int minPositiveValue(int*, int);
void printArray(int*, int);

using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::rand;
using std::time;

int main() {
    srand(time(NULL));

    const int length = 10;
    int array[length];
    for(int i = 0; i < length; i++) {
        array[i] = rand() % 21 - 10;
    }

    printArray(array, length);
    cout << "Max value: " << maxValue(array, length) << endl;
    cout << "Min value: " << minValue(array, length) << endl;
    cout << "Max negative value: " << maxNegativeValue(array, length) << endl;
    cout << "Min positive value: " << minPositiveValue(array, length) << endl;

    system("pause");
    return 0;
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

int maxNegativeValue(int *array, int length) {
    int max = minValue(array, length);
    for(int i = 1; i < length; i++) {
        if(array[i] < 0 && array[i] > max) max = array[i];
    }
    return max;
}

int minPositiveValue(int *array, int length) {
    int min = maxValue(array, length);
    for(int i = 1; i < length; i++) {
        if(array[i] > 0 && array[i] < min) min = array[i];
    }
    return min;
}

void printArray(int *array, int length) {
    cout << "Array:" << endl;
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
}