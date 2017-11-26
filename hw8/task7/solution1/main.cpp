#include <iostream>
#include <iomanip>

void printMatrix(int*, int, int);
void fillMatrix(int*, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int rows = 2;
    const int columns = 3;
    int array[rows][columns];
    fillMatrix(array[0], rows, columns);
    printMatrix(array[0], rows, columns);
    system("pause");
    return 0;
}

void fillMatrix(int* array, int rows, int columns) {
    cout << "Fill in the " << rows << "x" << columns << " matrix" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << "array[" << i << "][" << j << "] = ";
            cin >> *(array + i * columns + j);
        }
    }
}

void printMatrix(int *array, int rows, int columns) {
    cout << "Result: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << std::setw(4) << *(array + i * columns + j) << " ";
        }
        cout << endl;
    }
}