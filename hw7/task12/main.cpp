#include <iostream>

void shiftLeft3(int*, int*, int*);

using std::cin;
using std::cout;
using std::endl;

int main() {
    for(int i = 0; i < 2; i++) {
        int a, b, c;
        cout << "Enter 3 numbers: " << endl;
        cin >> a >> b >> c;
        shiftLeft3(&a, &b, &c);
        cout << "Result: " << a << " " << b << " " << c << endl;
    }
    system("pause");
    return 0;
}

void shiftLeft3(int *a, int *b, int *c) {
    int temp1 = *c, temp2 = *b;
    *c = *a;
    *b = temp1;
    *a = temp2;
}