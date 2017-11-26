#include <iostream>
#include <ctime>
#include <iomanip>

const int rows = 2;
const int columns = 3;

void fillMatrix(double [][columns]);
double getRandomNumber();
void fillMatrixA(double [][columns], double [][columns]);
void fillMatrixB(double [][columns], double [][columns]);
void printMatrix(double [][columns], int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));

    double matrix[rows][columns];
    fillMatrix(matrix);
    cout << "Matrix: " << endl;
    printMatrix(matrix, 3);

    double matrixA[rows][columns];
    fillMatrixA(matrix, matrixA);
    cout << "Matrix A: " << endl;
    printMatrix(matrixA, 0);

    double matrixB[rows][columns];
    fillMatrixB(matrix, matrixB);
    cout << "Matrix B: " << endl;
    printMatrix(matrixB, 3);

    system("pause");
    return 0;
}

void fillMatrix(double matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            matrix[i][j] = getRandomNumber();
        }
    }
}

double getRandomNumber() {
    return ((double) rand() / RAND_MAX) * 10000;
}

void fillMatrixA(double matrix[][columns], double matrixA[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            matrixA[i][j] = int(matrix[i][j]);
        }
    }
}

void fillMatrixB(double matrix[][columns], double matrixB[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
           matrixB[i][j] = matrix[i][j] - int(matrix[i][j]);
        }
    }
}

void printMatrix(double matrix[][columns], int precision) {
    cout << std::setprecision(precision) << std::fixed;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << std::setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}