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
    int index = 1;
    for(int i = 100; i >= 1; i--) {
        cout << i << " ";
        if(index < 5) index++;
        else {
            cout << endl;
            index = 1;
        }
    }
}