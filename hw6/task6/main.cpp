#include <iostream>
#include <iomanip>

void printNumbers(int, int, int);

using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main() {
    int startNum, endNum, numbersInRow;
    cout << "Enter start number, end number and numbers in row: " << endl;
    cin >> startNum >> endNum >> numbersInRow;
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