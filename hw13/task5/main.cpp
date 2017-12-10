// Найти произведение матрицы на число

#include <iostream>
#include <ctime>
#include <iomanip>

int** multiplyMatrix(int **, int, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));

    const int rows = 4;
    const int columns = 5;

    // Create the number
    int number = rand() % 10;
    cout << "Number: " << number << endl;

    // Fill the matrix
    cout << "Matrix is: " << endl;
    int **matrix = new int *[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
        for(int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 10;
            cout << std::setw(3) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Print the result of multiplication
    cout << "Result is: " << endl;
    int **resultMatrix = multiplyMatrix(matrix, rows, columns, number);
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

int** multiplyMatrix(int **matrix, int rows, int columns, int number) {
    int **resultMatrix = new int *[rows];
    for(int i = 0; i < rows; i++) {
        resultMatrix[i] = new int[columns];
        for(int j = 0; j < columns; j++) {
            resultMatrix[i][j] = matrix[i][j] * number;
        }
    }
    return resultMatrix;
}

