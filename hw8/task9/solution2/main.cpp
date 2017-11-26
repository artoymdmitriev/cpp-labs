#include <iostream>
#include <ctime>

const int rows = 2;
const int columns = 3;

void fillMatrix(int [][columns]);
int getRandomNumber();
void fillArrayB(int [][columns], int[]);
void fillArrayC(int [][columns], int[]);
void printMatrix(int [][columns]);
void printArray(int[], int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    int matrix[rows][columns];
    fillMatrix(matrix);
    cout << "Matrix: " << endl;
    printMatrix(matrix);

    int arrayB[columns];
    fillArrayB(matrix, arrayB);
    cout << "Array B: ";
    printArray(arrayB, columns);

    int arrayC[rows];
    fillArrayC(matrix, arrayC);
    cout << "Array C: ";
    printArray(arrayC, rows);
    system("pause");
    return 0;
}

void fillMatrix(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            matrix[i][j] = getRandomNumber();
        }
    }
}

int getRandomNumber() {
    return rand() % 2;
}

void fillArrayB(int matrix[][columns], int array[]) {
    for(int j = 0; j < columns; j++) {
        int nulls = true;
        for(int i = 0; i < rows; i++) {
            if(matrix[i][j] != 0) nulls = false;
        }
        array[j] = nulls ? 0 : 1;
    }
}

void fillArrayC(int matrix[][columns], int array[]) {
    for(int i = 0; i < rows; i++) {
        int nulls = true;
        for(int j = 0; j < columns; j++) {
            if(matrix[i][j] != 0) nulls = false;
        }
        array[i] = nulls ? 0 : 1;
    }
}

void printMatrix(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printArray(int array[], int length) {
    for(int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}