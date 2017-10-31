#include <iostream>

void printAsc(int, int);
void printDesc(int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cout << "Enter A and B: " << endl;
    cin >> a >> b;
    printAsc(a, b);
    printDesc(a, b);
    system("pause");
    return 0;
}

void printAsc(int a, int b) {
    cout << "Asc:" << endl;
    for(int i = a + 1; i < b; i++) cout << i << endl;
}

void printDesc(int a, int b) {
    cout << "Desc:" << endl;
    for(int i = b - 1; i > a; i--) cout << i << endl;
}