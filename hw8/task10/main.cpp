#include <iostream>
#include <ctime>
#include <iomanip>

void fillMatrix(double*, int, int);
double getRandomNumber();
void fillMatrixA(double*, double*, int, int);
void fillMatrixB(double*, double*, int, int);
void printMatrix(double*, int, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    const int rows = 2;
    const int columns = 3;
    double matrix[rows][columns];
    fillMatrix(matrix[0], rows, columns);
    cout << "Matrix: " << endl;
    printMatrix(matrix[0], rows, columns, 3);

    double matrixA[rows][columns];
    fillMatrixA(matrix[0], matrixA[0], rows, columns);
    cout << "Matrix A: " << endl;
    printMatrix(matrixA[0], rows, columns, 0);

    double matrixB[rows][columns];
    fillMatrixB(matrix[0], matrixB[0], rows, columns);
    cout << "Matrix B: " << endl;
    printMatrix(matrixB[0], rows, columns, 3);

    system("pause");
    return 0;
}

void fillMatrix(double* matrix, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            *(matrix + i * columns + j) = getRandomNumber();
        }
    }
}

double getRandomNumber() {
    return ((double) rand() / RAND_MAX) * 10000;
}

void fillMatrixA(double* matrix, double* matrixA, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            *(matrixA + i * columns + j) = (int) *(matrix + i * columns + j);
        }
    }
}

void fillMatrixB(double* matrix, double* matrixB, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            *(matrixB + i * columns + j) = *(matrix + i * columns + j) - (int) *(matrix + i * columns + j);
        }
    }
}

void printMatrix(double *matrix, int rows, int columns, int precision) {
    cout << std::setprecision(precision) << std::fixed;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << *(matrix + i * columns + j) << " ";
        }
        cout << endl;
    }
}