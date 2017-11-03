#include <iostream>

bool f1(int);
bool f2(int);
bool f3(int);
bool f4(int);
bool f5(int);
bool f6(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << f1(21) << endl;
    return 0;
}

bool f1(int a) {
    return a >= -20 && a <= 20;
}

bool f2(int a) {
    return a < -20 || a > 10;
}

bool f3(int a) {
    return a % 5 == 0;
}

bool f4(int a) {
    return a % 5 == 0 || a % 12 == 0;
}

bool f5(int a) {
    return a % 5 == 0 && a % 12 == 0;
}

bool f6(int a) {
    return a % 5 == 0 && a % 12 != 0;
}