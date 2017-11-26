#include <iostream>
#include <ctime>

const int rows = 2;
const int columns = 3;

void fillMatrix(int [][columns]);
int getRandomNumber();
int countZeros(int [][columns]);
int countPositiveNumbers(int [][columns]);
int countNegativeNumbers(int [][columns]);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    int matrix[rows][columns];
    fillMatrix(matrix);
    cout << "Amount of zeros: " << countZeros(matrix) << endl;
    cout << "Amount of positive numbers: " << countPositiveNumbers(matrix) << endl;
    cout << "Amount of negative numbers: " << countNegativeNumbers(matrix) << endl;
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
    return rand() % 21 - 10;
}

int countZeros(int matrix[][columns]) {
    int zeros = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(matrix[i][j] == 0) zeros++;
        }
    }
    return zeros;
}

int countPositiveNumbers(int matrix[][columns]) {
    int positiveNumbers = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(matrix[i][j] > 0) positiveNumbers++;
        }
    }
    return positiveNumbers;
}

int countNegativeNumbers(int matrix[][columns]) {
    int negativeNumbers = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(matrix[i][j] < 0) negativeNumbers++;
        }
    }
    return negativeNumbers;
}