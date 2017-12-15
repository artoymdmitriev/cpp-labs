#include <iostream>

const int rows = 4;
const int columns = 4;

void fillMatrixRows(int [][columns]);
void fillMatrixColumns(int [][columns]);
void fillMatrixCorners(int [][columns]);
void fillMatrixSnake(int [][columns]);
void printMatrix(int [][columns]);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int matrix[rows][columns];
    //fillMatrixRows(matrix);
    //printMatrix(matrix);
    //cout << endl;
    //fillMatrixSnake(matrix);
    //fillMatrixColumns(matrix);
    //printMatrix(matrix);
    //cout << endl;

    fillMatrixCorners(matrix);
    system("pause");
    return 0;
}


void fillMatrixRows(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

void fillMatrixColumns(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cin >> matrix[j][i];
        }
    }
}

void fillMatrixCorners(int matrix[][columns]) {

}

void fillMatrixSnake(int matrix[][columns]) {

}

void printMatrix(int matrix[][columns]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}