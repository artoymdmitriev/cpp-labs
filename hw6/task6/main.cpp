#include <iostream>
#include <iomanip>

void printNumbers(int, int, int);

using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main() {
    int startNum, endNum, numbersInRow;
    while(true) {
        cout << "Enter start number, end number and numbers in row: " << endl;
        cin >> startNum >> endNum >> numbersInRow;
        if(startNum > endNum) {
            cout << "Start number must be less than end number! Try again" << endl;
        } else if(startNum == 0 || endNum == 0 || numbersInRow == 0) {
            cout << "Numbers can't be 0! Try again" << endl;
        } else {
            break;
        }
    }
    printNumbers(startNum, endNum, numbersInRow);
    system("pause");
    return 0;
}

void printNumbers(int startNum, int endNum, int numbersInRow) {
    int index = 1;
    for(int i = startNum; i <= endNum; i++) {
        cout << setw(4) << i << " ";
        if(index < numbersInRow) index++;
        else {
            cout << endl;
            index = 1;
        }
    }
}