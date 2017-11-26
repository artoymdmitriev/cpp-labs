#include <iostream>
#include <ctime>

void fillMatrix(int*, int, int);
int getRandomNumber();
void fillArrayB(int*, int*, int, int);
void fillArrayC(int*, int*, int, int);
void printMatrix(int*, int, int);
void printArray(int*, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    const int rows = 2;
    const int columns = 3;
    int array[rows][columns];
    fillMatrix(array[0], rows, columns);
    cout << "Matrix: " << endl;
    printMatrix(array[0], rows, columns);

    int arrayB[columns];
    fillArrayB(array[0], arrayB, rows, columns);
    cout << "Array B: ";
    printArray(arrayB, columns);

    int arrayC[rows];
    fillArrayC(array[0], arrayC, rows, columns);
    cout << "Array C: ";
    printArray(arrayC, rows);
    system("pause");
    return 0;
}

void fillMatrix(int* matrix, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            *(matrix + i * columns + j) = getRandomNumber();
        }
    }
}

int getRandomNumber() {
    return rand() % 2;
}

void fillArrayB(int* matrix, int* array, int rows, int columns) {
    for(int j = 0; j < columns; j++) {
        int nulls = true;
        for(int i = 0; i < rows; i++) {
            if(*(matrix + i * columns + j) != 0) nulls = false;
        }
        array[j] = nulls ? 0 : 1;
    }
}

void fillArrayC(int* matrix, int* array , int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        int nulls = true;
        for(int j = 0; j < columns; j++) {
            if(*(matrix + i * columns + j) != 0) nulls = false;
        }
        array[i] = nulls ? 0 : 1;
    }
}

void printMatrix(int *array, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << *(array + i * columns + j) << " ";
        }
        cout << endl;
    }
}

void printArray(int *array, int length) {
    for(int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}