// Найти сумму двух матриц

#include <iostream>
#include <ctime>
#include <iomanip>

int** sumMatr(int **, int **, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));

    const int rows = 4;
    const int columns = 5;

    // Fill the first matrix
    cout << "First matrix is: " << endl;
    int **matrix1 = new int *[rows];
    for(int i = 0; i < rows; i++) {
        matrix1[i] = new int[columns];
        for(int j = 0; j < columns; j++) {
            matrix1[i][j] = rand() % 10;
            cout << std::setw(3) << matrix1[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Fill the second matrix
    cout << "Second matrix is: " << endl;
    int **matrix2 = new int *[rows];
    for(int i = 0; i < rows; i++) {
        matrix2[i] = new int[columns];
        for(int j = 0; j < columns; j++) {
            matrix2[i][j] = rand() % 10;
            cout << std::setw(3) << matrix2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Print the sum of matrices
    cout << "Sum of matrices is: " << endl;
    int **resultMatrix = sumMatr(matrix1, matrix2, rows, columns);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << std::setw(3) << resultMatrix[i][j];
        }
        cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}

int** sumMatr(int **matrix1, int **matrix2, int rows, int columns) {
    int **resultMatrix = new int *[rows];
    for(int i = 0; i < rows; i++) {
        resultMatrix[i] = new int[columns];
        for(int j = 0; j < columns; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return resultMatrix;
}