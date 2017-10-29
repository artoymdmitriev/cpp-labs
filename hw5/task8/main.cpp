#include <iostream>
#include <cmath>

int numberOfDigits(int);
int digitN(int, int);
void outputDigits(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    outputDigits(num1);
    outputDigits(num2);
    outputDigits(num3);
    outputDigits(num4);
    outputDigits(num5);
    system("pause");
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

void outputDigits(int num) {
    cout << "Number is: " << num << endl;
    for(int i = 1; i <= 5; i++) {
        cout << "Digit at position " << i << " is: " << digitN(num, i) << endl;
    }
}