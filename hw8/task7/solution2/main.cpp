#include <iostream>
#include <iomanip>

const int rows = 2;
const int columns = 3;

void printMatrix(int [][columns]);
void fillMatrix(int [][columns]);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int matrix[rows][columns];
    fillMatrix(matrix);
    printMatrix(matrix);
    system("pause");
    return 0;
}

void fillMatrix(int matrix[][columns]) {
    cout << "Fill in the " << rows << "x" << columns << " matrix" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << "array[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][columns]) {
    cout << "Result: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << std::setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}