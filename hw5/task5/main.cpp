#include <iostream>

int addRightDigit(int, int);
int addLeftDigit(int, int);
int numberOfDigits(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int k, d1, d2, result;
    cout << "Enter k, d1, d2" << endl;
    cin >> k >> d1 >> d2;
    result = addRightDigit(d1, k);
    cout << result << endl;
    result = addLeftDigit(d2, result);
    cout << result << endl;
    return 0;
}

int addRightDigit(int d, int k) {
    return k * numberOfDigits(d) + d;
}

int addLeftDigit(int d, int k) {
    return d * numberOfDigits(k) + k;
}

int numberOfDigits(int num) {
    int result = 1;
    while(num > 0) {
        result *= 10;
        num /= 10;
    }
    return result;
}