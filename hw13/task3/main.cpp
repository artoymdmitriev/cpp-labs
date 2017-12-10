// Перегрузить функцию минимума для двух элементов, трех элементов,
// ДРМ, ДРМ матрицы

#include <iostream>
#include <ctime>
#include <iomanip>

int min(int, int);
int min(int, int, int);
int min(int *, int);
int min(int **, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));

    // Min for 2 numbers
    int min1a = rand() % 10;
    int min1b = rand() % 10;
    cout << "Two numbers are: " << min1a << ", " << min1b
         << endl << "Min is " << min(min1a, min1b) << endl << endl;

    // Min for 3 numbers
    int min2a = rand() % 10;
    int min2b = rand() % 10;
    int min2c = rand() % 10;
    cout << "Three numbers are: " << min2a << ", " << min2b << ", " << min2c
         << endl << "Min is " << min(min2a, min2b, min2c) << endl << endl;

    // Min for an array
    int length = 5;
    int *array = new int[length];
    cout << "Array is: ";
    for(int i = 0; i < length; i++) {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    cout << endl << "Min is: " << min(array, length) << endl << endl;

    // Min for a matrix
    int columns = 4;
    int rows = 3;
    int **matrix = new int *[rows];
    cout << "Matrix is: " << endl;
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
        for(int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 100;
            cout << std::setw(2) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Min is: " << min(matrix, rows, columns) << endl << endl;

    system("pause");
    return 0;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int min(int a, int b, int c) {
    return min(min(a, b), c);
}

int min(int *array, int length) {
    int m = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] < m)
            m = array[i];
    }
    return m;
}

int min(int **matrix, int rows, int columns) {
    int m = matrix[0][0];
    for(int i = 0; i < rows; i++) {
        if(min(matrix[i], columns) < m) {
            m = min(matrix[i], columns);
        }
    }
    return m;
}