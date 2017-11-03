#include <iostream>
#include <iomanip>

void printNumbers();

using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main() {
    printNumbers();
    system("pause");
    return 0;
}

void printNumbers() {
    for(int i = 1; i <= 100; i++) {
        cout << setw(4) << i << " ";
        if(i % 10 == 0) cout << endl;
    }
}