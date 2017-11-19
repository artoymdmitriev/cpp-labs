#include <iostream>
#include <ctime>

void fillArray(int*, int);
int getRandomNumber();
int sumValues(int*, int);
int sumEvenValues(int*, int);
int sumOddValues(int*, int);
int sumEvenIndicesValues(int*, int);
int sumOddIndicesValues(int*, int);
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
    cout << "Sum of values is: " << sumValues(array, length) << endl;
    cout << "Sum of even values is: " << sumEvenValues(array, length) << endl;
    cout << "Sum of odd values is: " << sumOddValues(array, length) << endl;
    cout << "Sum of values with even indices is: " << sumEvenIndicesValues(array, length) << endl;
    cout << "Sum of values with odd indices is: " << sumOddIndicesValues(array, length) << endl;

    system("pause");
    return 0;
}

void fillArray(int *array, int length) {
    for(int i = 0; i < length; i++) {
        array[i] = getRandomNumber();
    }
}

int getRandomNumber() {
    return rand() % 11;
}

int sumValues(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

int sumEvenValues(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if(array[i] % 2 == 0) sum += array[i];
    }
    return sum;
}

int sumOddValues(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if(array[i] % 2 != 0) sum += array[i];
    }
    return sum;
}

int sumEvenIndicesValues(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if(i % 2 == 0) sum += array[i];
    }
    return sum;
}

int sumOddIndicesValues(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if(i % 2 != 0) sum += array[i];
    }
    return sum;
}

void printArray(int *array, int length) {
    cout << "Array:" << endl;
    for(int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
}