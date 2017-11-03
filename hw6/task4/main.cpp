#include <iostream>

void printNumbers();

using std::cin;
using std::cout;
using std::endl;

int main() {
    printNumbers();
    system("pause");
    return 0;
}

void printNumbers() {
    for(int i = 1; i <= 100; i++) {
        cout << i << " ";
        if(i % 10 == 0) cout << endl;
    }
}