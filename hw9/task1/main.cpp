#include <iostream>

const int columns = 3;
const int rows = 2;

void fillMatrix(int [][columns]);
void printMatrixRows(int [][columns]);
void printMatrixColumns(int [][columns]);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int matrix[rows][columns];
    fillMatrix(matrix);
    printMatrixRows(matrix);
    cout << endl;
    printMatrixColumns(matrix);
    cout << endl;
    return 0;
}

void fillMatrix(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrixRows(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printMatrixColumns(int matrix[][columns]) {
    for(int i = 0; i < columns; i++) {
        for(int j = 0; j < rows; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}