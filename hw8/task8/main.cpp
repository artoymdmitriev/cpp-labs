#include <iostream>
#include <ctime>

void fillMatrix(int*, int, int);
int getRandomNumber();
int countZeros(int*, int, int);
int countPositiveNumbers(int*, int, int);
int countNegativeNumbers(int*, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    const int rows = 2;
    const int columns = 3;
    int array[rows][columns];
    fillMatrix(array[0], rows, columns);
    cout << "Amount of zeros: " << countZeros(array[0], rows, columns) << endl;
    cout << "Amount of positive numbers: " << countPositiveNumbers(array[0], rows, columns) << endl;
    cout << "Amount of negative numbers: " << countNegativeNumbers(array[0], rows, columns) << endl;
    system("pause");
    return 0;
}

void fillMatrix(int* array, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            *(array + i * columns + j) = getRandomNumber();
        }
    }
}

int getRandomNumber() {
    return rand() % 21 - 10;
}

int countZeros(int *array, int rows, int columns) {
    int zeros = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(*(array + i * columns + j) == 0) zeros++;
        }
    }
    return zeros;
}

int countPositiveNumbers(int *array, int rows, int columns) {
    int positiveNumbers = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(*(array + i * columns + j) > 0) positiveNumbers++;
        }
    }
    return positiveNumbers;
}

int countNegativeNumbers(int *array, int rows, int columns) {
    int negativeNumbers = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(*(array + i * columns + j) < 0) negativeNumbers++;
        }
    }
    return negativeNumbers;
}