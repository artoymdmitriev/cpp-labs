#include <iostream>
#include <cmath>

int numberOfDigits(int);
int digitN(int, int);
int toMultiply(int);
int randomIndex();

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << digitN(num1, randomIndex()) << endl;
    cout << digitN(num2, randomIndex()) << endl;
    cout << digitN(num3, randomIndex()) << endl;
    cout << digitN(num4, randomIndex()) << endl;
    cout << digitN(num5, randomIndex()) << endl;
    return 0;
}

int digitN(int k, int n) {
    if(n > numberOfDigits(k) || n == 0) {
        return -1;
    }
    int counter = 0;
    while(counter != n - 1) {
        k /= 10;
        counter++;
    }
    return k - (k / 10 * 10);
}

int numberOfDigits(int num) {
    int result = 0;
    while(num > 0) {
        result++;
        num /= 10;
    }
    return result;
}

int randomIndex() {
    int random = rand() % 5 + 1;
    cout << "Digit at position: " << random << " is: ";
    return random;
}